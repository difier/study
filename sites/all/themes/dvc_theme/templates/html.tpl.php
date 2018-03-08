<!DOCTYPE html>
<head>
<meta http-equiv="X-UA-Compatible" content="IE=Edge" />
<?php print $head; ?>

<title><?php print isset($custom_head_title) ? $custom_head_title : $head_title; ?></title>

<?php print $styles; ?>
<?php print $scripts; ?>
<?php print $additional_scripts; ?>


<meta name="viewport" content="width=device-width, initial-scale=1.0">
<!--[if lt IE 9]><script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
