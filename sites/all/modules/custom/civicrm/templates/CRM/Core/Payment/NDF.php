<?php



/**
 * http://www.citytechcorp.com/
 * @package CRM
 * @author Marshal Newrock <marshal@idealso.com>
 
 * $Id: NDF.php 24552 2009-10-27 08:46:17Z shot $
 */

/* NOTE:
 * When looking up response codes in the nextdayfunding.com API, they
 * begin at one, so always delete one from the "Position in Response"
 */

require_once 'CRM/Core/Payment.php';
require_once 'CRM/Core/hmacmd5_inc.php';

class CRM_Core_Payment_NDF extends CRM_Core_Payment {
    const
        CHARSET = 'iso-8859-1';

    const AUTH_APPROVED = 1;
    const AUTH_DECLINED = 2;
    const AUTH_ERROR = 3;

    static protected $_mode = null;

    static protected $_params = array();
    
    /**
     * Constructor
     *
     * @param string $mode the mode of operation: live or test
     *
     * @return void
     */
    function __construct( $mode, &$paymentProcessor ) {
		
		
		$this->_setParam( 'Seed',rand() );  
		$this->_vSignature = hex_hmac_md5($paymentProcessor['signature'], $paymentProcessor['user_name'] . ':' . $paymentProcessor['password'] . ':' .$this->_getParam('Seed') . ':' . $this->_getParam('amount'));
		$this->_vSecret=$paymentProcessor['signature'];
        $this->_mode             = $mode;
	    $this->_paymentProcessor = $paymentProcessor;
        $this->_processorName    = ts('nextdayfunding.com');
        $config =& CRM_Core_Config::singleton();
        $this->_setParam( 'MerchantId'   , $paymentProcessor['user_name'] );
        $this->_setParam( 'TerminalId' , $paymentProcessor['password']  );
        $this->_setParam( 'Signature', $this->_vSignature );  
        $this->_setParam( 'emailCustomer', 'TRUE' );
        $this->_setParam( 'timestamp', time( ) );
        srand( time( ) );
        $this->_setParam( 'sequence', rand( 1, 1000 ) );
    }

    /**
     * Submit a payment using Advanced Integration Method
     *
     * @param  array $params assoc array of input parameters for this transaction
     * @return array the result in a nice formatted array (or an error object)
     * @public
     */
    function doDirectPayment( &$params ) 
	
	{
		
		
	
        if ( ! defined( 'CURLOPT_SSLCERT' ) )
		 {
            return self::error( 9001, 'nextdayfunding.com requires curl with SSL support' );
        }

        foreach ( $params as $field => $value ) 
		{
            $this->_setParam( $field, $value );
        }

       
        $postFields         = array( );
        $NDFFields = $this->_getNDFFields( );
		
		
        // Set up our call for hook_civicrm_paymentProcessor,
        // since we now have our parameters as assigned for the AIM back end.
        CRM_Utils_Hook::alterPaymentProcessorParams( $this,
                                                     $params,
                                                     $NDFFields );

        foreach ( $NDFFields as $field => $value ) {
            $postFields[] = $field . '=' . urlencode( $value );
        }

      
		 		
        $submit = curl_init( $this->_paymentProcessor['url_site'] );

        if ( !$submit ) {
            return self::error(9002, 'Could not initiate connection to payment gateway');
        }
		
					
        curl_setopt( $submit, CURLOPT_POST, true );
        curl_setopt( $submit, CURLOPT_RETURNTRANSFER, true );
        curl_setopt( $submit, CURLOPT_POSTFIELDS, implode( '&', $postFields ) );
		curl_setopt($submit, CURLOPT_SSL_VERIFYPEER, FALSE);// this one is probably enough
        curl_setopt($submit, CURLOPT_SSL_VERIFYHOST, FALSE);

        $response = curl_exec( $submit );

        if (!$response) {
            return self::error( curl_errno($submit), curl_error($submit) );
        }

        curl_close( $submit );

        //$response_fields = $this->explode_csv( $response );
	$vSecret  		= $this->_vSecret; /*Your secret value obtained from Charge Anywhere Manager*/
	$vMerchantId	= $NDFFields['MerchantId']; /*Your Merchant ID*/
	$vTerminalId	= $NDFFields['TerminalId']; /*Your Terminal ID*/
	$vSeed 			=  rand(); /*A random value*/
	$vCardNumber	= $NDFFields['CardNumber']; /*Customer Credit Card Number*/
	$vExpMonth 		= $NDFFields['ExpMonth']; /*Expiration Month on the Credit Card*/
	$vExpYear 		= $NDFFields['ExpYear'];/*Expiration Year on the Credit Card*/
	$vAmount 		= $NDFFields['Amount']; /*The amount of the transaction*/
	$vMode       = '2';

    if ($NDFFields['isRecurring']) {
        $vIsRecurring = '1';
        $vRecurringEffectiveDate = $NDFFields['RecurringEffectiveDate'];
        $vRecurringFrequency = $NDFFields['intervalLength'];
        $vRecurringPayments = $NDFFields[' totalOccurrences'];
    }
	

	$vPostData  = "Mode=$vMode";
	$vPostData .= "&MerchantId=$vMerchantId";
	$vPostData .= "&TerminalId=$vTerminalId";
	$vPostData .= "&Secret=$vSecret";
	$vPostData .= "&CardNumber=$vCardNumber";
	$vPostData .= "&ExpMonth=$vExpMonth";
	$vPostData .= "&ExpYear=$vExpYear";
	$vPostData .= "&Amount=$vAmount";
    if ($vIsRecurring) {
        $vPostData .= "&IsRecurring=$vIsRecurring";
        $vPostData .= "&RecurringEffectiveDate=$vRecurringEffectiveDate";
        $vPostData .= "&RecurringPayments=$vRecurringPayments";
    }

		
	$vURL = $this->_paymentProcessor['url_site'];
	$vOptions = array
				( 
				  'http' => 
				    array 
					( 
					  'method'  => 'POST',
					  'header'  => 'Content-type: application/x-www-form-urlencoded',
					  'content' => $vPostData
					)
				);
	
	$vContext = stream_context_create($vOptions);
	$vResponse = file_get_contents($vURL, false, $vContext);
	
	/*..SUPSPENDING CURL METHOD AND USING NDF GIVEN METHOD..*/
	$response=$vResponse;
	/*
	echo "<pre>";
     print_r($response);
	 exit;
	 */
		$resp_arr_main=explode("&",$response);
		$resp_arr_sub_1=explode("=",$resp_arr_main[1]);
		$fe_status= $resp_arr_sub_1[1];

        $resp_arr_sub_2=explode("=",$resp_arr_main[2]);
		$fe_msg= $resp_arr_sub_2[1];
		
		if($fe_status!="000")
		return self::error( 9003, 'Transaction failed:'.$fe_msg );	
		
        return $params;
    }
    

    function _getNDFFields( ) {
        $fields = array();
        $fields['MerchantId']       = $this->_getParam( 'MerchantId' );
        $fields['TerminalId']       = $this->_getParam( 'TerminalId' );
        $fields['Seed']             = $this->_getParam( 'Seed' );
		$fields['Amount']           = $this->_getParam( 'amount' );
        $fields['Signature']        = $this->_vSignature;
		$fields['CardNumber']       = $this->_getParam( 'credit_card_number' );
        $fields['ExpMonth']         = str_pad( $this->_getParam( 'month' ), 2, '0', STR_PAD_LEFT );
        $fields['ExpYear']          = substr($this->_getParam( 'year' ), -2);
        $fields['Mode']             = "2";

        // fields for recurring payments
        if ($this->_getParam( ' startDate ')) {
            $fields['isRecurring']      = "1";
            $fields['RecurringEffectiveDate'] = $this->_getParam( 'startDate' );
            $fields['RecurringFrequency'] = $this->_getParam( 'intervalLength' );
            $fields['RecurringPayments'] = $this->_getParam( ' totalOccurrences' );
        }

        return $fields;

    }

   
  
    

 
    

    /**
     * Extract variables from returned XML
     *
     * Function is from nextdayfunding.com sample code, and used 
     * to prevent the requirement of XML functions.
     *
     * @param string $content XML reply from nextdayfunding.com
     * @return array refId, resultCode, code, text, subscriptionId
     */
    function _parseArbReturn( $content ) {
        $refId          = $this->_substring_between($content,'<refId>','</refId>');
        $resultCode     = $this->_substring_between($content,'<resultCode>','</resultCode>');
        $code           = $this->_substring_between($content,'<code>','</code>');
        $text           = $this->_substring_between($content,'<text>','</text>');
        $subscriptionId = $this->_substring_between($content,'<subscriptionId>','</subscriptionId>');
        return array(
                     'refId'          => $refId,
                     'resultCode'     => $resultCode,
                     'code'           => $code,
                     'text'           => $text,
                     'subscriptionId' => $subscriptionId
                     );
    }

    /**
     * Helper function for _parseArbReturn
     *
     * Function is from nextdayfunding.com sample code, and used to avoid using
     * PHP5 XML functions
     */
    function _substring_between( &$haystack, $start, $end ) {
        if (strpos($haystack,$start) === false || strpos($haystack,$end) === false) {
            return false;
        } else {
            $start_position = strpos($haystack,$start)+strlen($start);
            $end_position   = strpos($haystack,$end);
            return substr($haystack,$start_position,$end_position-$start_position);
        }
    }


    /**
     * Get the value of a field if set
     *
     * @param string $field the field
     * @return mixed value of the field, or empty string if the field is
     * not set
     */
    function _getParam( $field ) {
        return CRM_Utils_Array::value( $field, $this->_params, '' );
    }

    function &error( $errorCode = null, $errorMessage = null ) {
        $e =& CRM_Core_Error::singleton( );
        if ( $errorCode ) {
            $e->push( $errorCode, 0, null, $errorMessage );
        } else {
            $e->push( 9001, 0, null, 'Unknown System Error.' );
        }
        return $e;
    }

    /**
     * Set a field to the specified value.  Value must be a scalar (int,
     * float, string, or boolean)
     *
     * @param string $field
     * @param mixed $value
     * @return bool false if value is not a scalar, true if successful
     */ 
    function _setParam( $field, $value ) {
        if ( ! is_scalar($value) ) {
            return false;
        } else {
            $this->_params[$field] = $value;
        }
    }

    /**
     * This function checks to see if we have the right config values 
     *
     * @return string the error message if any
     * @public
     */
    function checkConfig( ) {
        $error = array();
        if ( empty( $this->_paymentProcessor['user_name'] ) ) {
            $error[] = ts( 'MerchantId is not set for this payment processor' );
        }
        
        if ( empty( $this->_paymentProcessor['password'] ) ) {
            $error[] = ts( 'Key is not set for this payment processor' );
        }

        if ( ! empty( $error ) ) {
            return implode( '<p>', $error );
        } else {
            return null;
        }
    }

    function cancelSubscriptionURL( ) {
        return ( $this->_mode == 'test' ) ?
            'https://test.nextdayfunding.com' : 'https://nextdayfunding.com';
    }

}         
