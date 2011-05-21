<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
// TODO: should probably redo the whole thing
?>
<?php if (!empty($title)): ?>
<h3>
<?php print $title; ?>
</h3>
<?php endif; ?>
<h4>Senate Candidates</h4>
<table style="width: 100%;">
  <thead>
    <tr>
      <th>Candidate</th>
      <th style='text-align: center;'>Q1</th>
      <th style='text-align: center;'>Q2</th>
      <th style='text-align: center;'>Q3</th>
      <th style='text-align: center;'>Q4</th>
      <th style='text-align: center;'>Q5</th>
      <th style='text-align: center;'>Q6</th>
      <th style='text-align: center;'>Q7</th>
      <th style='text-align: center;'>Q8</th>
      <th style='text-align: center;'>Q9</th>
      <th style='text-align: center;'>Q10</th>
      <th style='text-align: center;'>Q11</th>
      <th style='text-align: center;'>Q12</th>
      <th style='text-align: center;'>Q13</th>
      <th style='text-align: center;'>Q14</th>
      <th style='text-align: center;'>Q15</th>
      <th style='text-align: center;'>Q16</th>
      <th style='text-align: center;'>Q17</th>
      <th style='text-align: center;'>Q18</th>
      <th style='text-align: center;'>Q19</th>
      <th style='text-align: center;'>Q20</th>
    </tr>
  </thead>

  <tbody>


  <?php foreach ($rows as $id => $row): ?>
  <?php //TODO: awkward syntax?>
    <div class="<?php print $classes[$id]; ?>">
    <?php
    if(false === stripos( $row, "US House") ){
      print $row;
    }

    ?>
    </div>
    <?php endforeach; ?>


  </tbody>
</table>


<h4>House Candidates</h4>

<table style="width: 100%;">
  <thead>
    <tr>
      <th>Dist.</th>
      <th>Candidate</th>
      <th style='text-align: center;'>Q1</th>
      <th style='text-align: center;'>Q2</th>
      <th style='text-align: center;'>Q3</th>
      <th style='text-align: center;'>Q4</th>
      <th style='text-align: center;'>Q5</th>
      <th style='text-align: center;'>Q6</th>
      <th style='text-align: center;'>Q7</th>
      <th style='text-align: center;'>Q8</th>
      <th style='text-align: center;'>Q9</th>
      <th style='text-align: center;'>Q10</th>
      <th style='text-align: center;'>Q11</th>
      <th style='text-align: center;'>Q12</th>
      <th style='text-align: center;'>Q13</th>
      <th style='text-align: center;'>Q14</th>
      <th style='text-align: center;'>Q15</th>
      <th style='text-align: center;'>Q16</th>
      <th style='text-align: center;'>Q17</th>
      <th style='text-align: center;'>Q18</th>
      <th style='text-align: center;'>Q19</th>
      <th style='text-align: center;'>Q20</th>
    </tr>
  </thead>

  <tbody>

    <?php //TODO: awkward syntax?>
    <?php foreach ($rows as $id => $row): ?>
    <div class="<?php print $classes[$id]; ?>">
      <?php
	if(stripos( $row, "US House") > 0){ 
		print $row;
	}
     ?>
    </div>
    <?php endforeach; ?>


  </tbody>
</table>

