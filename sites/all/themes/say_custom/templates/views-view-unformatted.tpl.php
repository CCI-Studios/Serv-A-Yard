<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="group">
<?php foreach ($rows as $id => $row): 
  $mod4 = $id%4;
  ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .' mod4-'.$mod4.'"';  } ?>><div><div>
    <?php print $row; ?>
  </div></div></div>
<?php endforeach; ?>
</div>
