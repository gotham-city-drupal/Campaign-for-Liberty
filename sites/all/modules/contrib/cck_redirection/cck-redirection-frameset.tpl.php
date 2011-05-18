<?php
// $Id: cck-redirection-frameset.tpl.php,v 1.1.2.1 2008/07/09 05:01:49 morrissinger Exp $
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Frameset//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-frameset.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
  <title><?php print $node->title; ?></title>
  <script type="text/javascript"><?php /* Needed to avoid Flash of Unstyle Content in IE */ ?> </script>
</head>

<frameset rows="100px, *">
  <frame src="<?php print $header_uri ?>"/  noresize="noresize" scrolling="no">
  <frame  src="<?php print $uri ?>" />
</frameset>

</html>
