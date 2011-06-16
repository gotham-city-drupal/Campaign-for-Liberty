  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = 6.x
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = 2
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Use Pressflow instead of Drupal core:
;projects[pressflow][type] = "core"
;projects[pressflow][download][type] = "get"
;projects[pressflow][download][url] = "http://files.pressflow.org/pressflow-6-current.tar.gz"


; Core Modules
; --------
projects[adminrole][subdir] = contrib
projects[cck][subdir] = contrib
projects[content_taxonomy][subdir] = contrib
projects[filefield][subdir] = contrib
projects[imagefield][subdir] = contrib
projects[link][subdir] = contrib
projects[ctools][subdir] = contrib
projects[context][subdir] = contrib
projects[date][subdir] = contrib
projects[flag][subdir] = contrib
projects[image][subdir] = contrib
projects[imageapi][subdir] = contrib
projects[imagecache][subdir] = contrib
projects[emfield][subdir] = contrib
projects[imce][subdir] = contrib
projects[itweak_upload][subdir] = contrib
projects[logintoboggan][subdir] = contrib
projects[mollom][subdir] = contrib
projects[pathauto][subdir] = contrib
projects[path_redirect][subdir] = contrib
projects[token][subdir] = contrib
projects[imce_wysiwyg][subdir] = contrib
projects[jquery_ui][subdir] = contrib
projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][subdir] = contrib
projects[views][subdir] = contrib
projects[views_slideshow][subdir] = contrib
projects[features_extra][subdir] = contrib
projects[imagefield][subdir] = contrib
projects[imagefield_crop][subdir] = contrib
projects[imce_kama][subdir] = contrib
projects[libraries][subdir] = contrib
projects[media_youtube][subdir] = contrib
projects[media_foxnews][subdir] = contrib
projects[mollom][subdir] = contrib
projects[nodequeue][subdir] = contrib
projects[strongarm][subdir] = contrib
projects[uuid][subdir] = contrib
projects[uuid_features][version] = "1.0-alpha1"
projects[uuid_features][subdir] = contrib
projects[features][version] = "1.0"
projects[features][subdir] = contrib
projects[viewscarousel] = contrib
projects[jcarousel] = contrib
projects[conditional_fields][version] = "2.x-dev"
projects[conditional_fields][subdir] = contrib


; Patches
; --------
; Lets us link UUID nodes in features to menus items in features
projects[features][patch][] = "http://drupal.org/files/issues/features.860974.patch"
projects[features][patch][] = "http://drupal.org/files/issues/968826-features-menu-uuid_0.patch"
projects[uuid_features][patch][] = "http://drupal.org/files/issues/drupal-clone-alter-01.patch"



; Themes
; --------
; LIBERTY THEME OPTION HERE


; Libraries
; ---------

; jQuery UI
libraries[jquery_ui][download][type] = "git"
libraries[jquery_ui][download][url] = "https://github.com/jquery/jquery-ui.git"
libraries[jquery_ui][download][tag] = "1.7.4"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"


; CKEditor
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6/ckeditor_3.6.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"