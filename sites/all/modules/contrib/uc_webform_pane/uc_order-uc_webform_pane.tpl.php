<?php

/**
 * @file
 * This file provides a snippet of template code that you can insert into your invoice template to display Webform pane values.
 */
?>

<!-- Webform Panes -->
<?php
  $webforms = _uc_webform_pane_get_nodes();
  foreach ($webforms as $webform) {
    $nid = $webform->nid;
    $node = node_load($nid);
?>
    <tr>
      <td colspan="2" bgcolor="#006699">
        <b><?php echo t($node->title); ?></b>
      </td>
    </tr>
    <tr>
      <td colspan="2">
        <table border="0" cellpadding="1" cellspacing="0" width="100%" style="font-family: verdana, arial, helvetica; font-size: small;">
          <?php
            foreach ($node->webform['components'] as $field) {
          ?>
              <tr>
                <td nowrap="nowrap">
                  <b><?php echo t($field['name']); ?>:</b>
                </td>
                <td width="98%">
                  <?php echo ${'uc_webform_'.$nid.'_'.$field['form_key']}; ?>
                </td>
              </tr>  
          <?php
            }
          ?>
        </table>
      </td>
    </tr>
<?php
  }
?>
<!-- End Webform Panes -->
