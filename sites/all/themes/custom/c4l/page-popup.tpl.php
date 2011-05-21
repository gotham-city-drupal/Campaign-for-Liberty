<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"
  xml:lang="<?php print $language->language ?>"
  lang="<?php print $language->language ?>"
  dir="<?php print $language->dir ?>">
<style type="text/css">
html {
  overflow: visible;
}

body {
  color: #333;
  font-family: "Lucida Sans Unicode", "Lucida Grande", sans-serif;
  font-size: 12px;
  padding: 0;
}

.simplemodal-close {
  background: url(images/modal/close_box.png) no-repeat;
  /* adjust url as required */
  width: 46px;
  height: 13px;
  margin-right: 20px;
  margin-top: 20px;
  float: right;
  z-index: 3200;
  cursor: pointer;
}

.modal {
  width: 100%;
  height: 100%;
  background-color: #fff;
}
/*.modal-header {background-color:#000; height:65px; width:100%;}
.modal-title {margin-left:20px; padding-top:20px; color:#fff; font-size:18px; float:left; background:#000 url(images/titlegraphic_quickarticles_popup.png) no-repeat top left; height:40px; width:112px;}
.modal-title {margin-left:20px; padding-top:20px; color:#fff; font-size:18px; float:left;}*/
.modal-content {
  background-color: #fff;
  padding: 30px;
}

.modal .article-detail { /*margin:0 10px 0 20px; */
  
}

.modal .article-detail .title {
  font-size: 18px;
  font-weight: normal;
  text-transform: capitalize;
  color: #e51b24;
  margin: 10px 0;
  padding: 0;
}

.modal .article-detail .body,.article-detail p {
  line-height: 17px;
  text-align: left;
  margin-bottom: 10px;
}

.modal .article-detail .image,.article-detail img {
  float: left;
  margin: 0 10px 0 0;
}

fieldset {
  display: none;
}

.vertical-tabs-menu {
  display: none
}

#admin-menu {
  display: none
}

.better-select {
  display: none;
}

#edit-title-wrapper {
  display: none;
}

.body-field-wrapper {
  display: none;
}

#edit-field-group-nid-nid-wrapper {
  display: none;
}

#field-fathor-node-items {
  display: none;
}

#edit-field-editorial-teaser-0-value-wrapper {
  display: none;
}

.options fieldset {
  display: block;
}
</style>
<head>
<link type="text/css" rel="stylesheet" media="all"
  href="/sites/all/themes/basetheme/css/popup.css" />
</head>
<body>
  <div class="modal">
    <!-- <div class="modal-header">
            <div class="modal-title"></div>
            <div class="simplemodal-close">
            </div>
        </div>-->
    <div class="modal-content">
      <?php print $content ?>
    </div>
    <?php print $closure ?>
  </div>

</body>
</html>

