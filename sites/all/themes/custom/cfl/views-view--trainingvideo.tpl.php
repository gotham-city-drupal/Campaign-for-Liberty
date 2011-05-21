<?php
// FIXME: hopefully this is just not being used.
// $Id: views-view--trainingvideo.tpl.php,v 1.7 2011/01/04 19:24:23 goba Exp $
/**
 * @file views-view-trainingvideo.tpl.php
 * Default simple view template to display a list of rows.
 *
 *
 */




//menu goes here
if ($_REQUEST['conference'] == '') {
  ?>
<big><b>Campaign For Liberty Training Videos 

</big>
</b>
<br>
<br>
Below you will find videos of Campaign For Liberty training events and
other events.&nbsp;
<br>
<br>
<b>Please note, you may NOT share these videos with others.</b>
<br>
<br>


<b><a href='?conference=coordinatortraining'>Coordinator Training
    Sessions 

</b>
</a>
includes:
<ul>
  <li>How to Grow Your County Organizations
  
  <li>The Key to Building Your Lists

</ul>



<b><a href='?conference=stlouis'>Conference 1: St. Louis 

</b>
</a>
includes:
<ul>
  <li>The Constitution: A Jeffersonian Primer
  
  <li>Basics of Organizing
  
  <li>How to Lobby Congress
  
  <li>How to Lobby Your Neighbor
  
  <li>How to Lobby Other Organizations
  
  <li>How to Lobby the Media
  
  <li>Ready to Run?
  
  <li>Q&A

</ul>
<b><a href='?conference=seattle'>Conference 2: Seattle 

</b>
</a>
includes:
<ul>
  <li>The States v. D.C.: Episodes in American History They Don't Teach
    in School
  
  <li>Basics of Effective Communication
  
  <li>Basic Fund-Raising Strategies
  
  <li>Face-to-Face Fund-Raising
  
  <li>Q&A

</ul>
<b><a href='?conference=vegas'>Conference 3: Las Vegas 

</b>
</a>
includes:
<ul>
  <li>The Real Nature of Politics and Politicians
  
  <li>Sound Money, Sound Economy
  
  <li>Recruiting and Vetting Candidates
  
  <li>Tactical Skills
  
  <li>How to Be the Life of the Party
  
  <li>Social Networking for Liberty

</ul>
<b><a href='?conference=valleyforge'>Conference 4: Valley Forge 

</b>
</a>
includes:
<ul>
  <li>The Real Nature of Politics and Politicians
  
  <li>Being a Leader and Recruiting New Leaders
  
  <li>Working With Volunteers
  
  <li>Building Your Plan
  
  <li>Where Do Our Rights Come From?
  
  <li>Keys to Changing Policy
  
  <li>Q&A

</ul>
<b><a href='?conference=atlanta'>Conference 5: Atlanta 

</b>
</a>
includes:
<ul>
  <li>The Real Nature of Politics and Politicians
  
  <li>Choosing Battles
  
  <li>Inside Operations
  
  <li>Targeting Legislators

</ul>
<b><a href='?conference=cpac2010'>CPAC 2010 

</b>
</a>
includes:
<ul>
  <li>Liberty Forum with Congressman Ron Paul, Judge Andrew Napolitano,
    and Thomas Woods
  
  <li>Ron Paul's CPAC Address
  
  <li>Gary Johnson at the Defending the American Dream panel
  
  <li>Why Real Conservatives are Against the War on Terror with Bruce
    Fein, Phil Giraldi, Karen Kwiatkowski, and Jacob Hornberger

</ul>
<b><a href='?conference=iowa'>Conference 6: Iowa 

</b>
</a>
includes:
<ul>
  <li>Tactical Skills
  
  <li>The Why and How of Precinct Organization
  
  <li>Forum on the Future of Conservatism

</ul>

<b><a href='?conference=fl2010'>Florida Liberty Summit 2010 

</b>
</a>


<br>

  <?php  }

  else {
    echo "Jump to conference: &nbsp; &nbsp; ";
    if ($_SESSION['access'] != '7') echo "<a href='?conference=coordinatortraining'>Special Coordinator Webinars</a> &nbsp; | &nbsp; ";
    echo "<a href='?conference=stlouis'>St. Louis</a> &nbsp; | &nbsp;
			<a href='?conference=seattle'>Seattle</a> &nbsp; | &nbsp; 
			<a href='?conference=vegas'>Las Vegas</a> &nbsp; | &nbsp; 
			<a href='?conference=valleyforge'>Valley Forge</a><br> &nbsp; | &nbsp; 
			<a href='?conference=atlanta'>Atlanta</a> &nbsp; | &nbsp; 
			<a href='?conference=cpac2010'>CPAC 2010</a> &nbsp; | &nbsp; 
			<a href='?conference=iowa'>Iowa</a> &nbsp; | &nbsp; 
			<a href='?conference=fl2010'>Florida</a><br><br>";
  }

  if ($_REQUEST['conference'] == 'coordinatortraining') { ?>

<h5>Campaign For Liberty Coordinator Training Webinars</h5>
<br>

<em>Secrets of Success: How to Grow Your County Organization</em>
with Dave Pridgeon, Harford Maryland County Coordinator, and Kirk
Shelley, C4L Senior Consultant for State Operations (141MB, 61 minute
AVI video file)
<br>
<br>
<iframe
  src="http://player.vimeo.com/video/15720130" width="400" height="300"
  frameborder="0"></iframe>
<br>
<br>


<em>The Key To Building Lists</em>
(48MB, 64 minute WMV video file)
<br>
<br>
If you intend to use Microsoft Access database to keep track of your
lists,
<a
  href='http://office.microsoft.com/en-us/training/get-to-know-access-RZ006118141.aspx'
  target='_blank'>a tutorial can be found at this link.</a>
&nbsp; You can also use
<a href='http://www.openoffice.org' target='_blank'>OpenBase</a>
, a comparable free database application.
<br>
<br>



<iframe
  src="http://player.vimeo.com/video/14839318" width="400" height="300"
  frameborder="0"></iframe>
<br>
<br>


  <?php  } if ($_REQUEST['conference'] == 'stlouis') { ?>




<h5>Conference 1: St. Louis</h5>
<br>

<br>
St. Louis Freedom Celebration
<br>
<br>

<iframe
  src="http://player.vimeo.com/video/14114386" width="400" height="300"
  frameborder="0"></iframe>
<iframe
  src="http://player.vimeo.com/video/14114819" width="400" height="300"
  frameborder="0"></iframe>
<br>
<br>

<em>The Constitution: A Jeffersonian Primer</em>
with Thomas Woods, Part 1 (426 MB, 66 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14115216" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<em>Basics of Organizing</em>
with John Tate (106 MB, 16 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14130122" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<em>How to Lobby Congress</em>
with Barry Aarons (408 MB, 63 minutes)
<br>

&nbsp; &nbsp; &nbsp; Barry Aarons Powerpoint presentation (2 MB)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14305183" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<em>How to Lobby Your Neighbor</em>
with Robert Arnakis (326 MB, 50 minutes)
<br>

&nbsp; &nbsp; &nbsp; Robert Arnakis Powerpoint presentation (2 MB)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14339083" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<em>How to Lobby Other Organizations</em>
with Kirk Shelley (378 MB, 59 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14130377" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<em>Ready to Run?</em>
with Dan Tripp (359 MB, 77 minutes)
<br>
(note: the audio sounds raspy only during the introduction)
<br>

&nbsp; &nbsp; &nbsp; Dan Tripp Powerpoint presentation (1 MB)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14302622" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<em>How to Lobby the Media</em>
with Jesse Benton (332MB, 51 minutes)
<br>

&nbsp; &nbsp; &nbsp; Jesse Benton Powerpoint presentation (0.5 MB)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14339924" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>


Panelists Q & A (236 MB, 36 minutes)
<br>
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14339950" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

  <?php  } if ($_REQUEST['conference'] == 'communication') { ?>

<h5>Basics of Effective Communication</h5>
<br>

Mike Rothfeld:
<em>Basics of Effective Communication, Part 1</em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14340779" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Mike Rothfeld:
<em>Basics of Effective Communication, Part 2</em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14341650" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>


  <?php  } if ($_REQUEST['conference'] == 'seattle') { ?>


<h5>Conference 2: Seattle</h5>
<br>

<big><b>Freedom Celebration</b> </big>
<br>
<br>

<div align='center'>
  <iframe src="http://player.vimeo.com/video/14342493" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Thomas Woods:
<em>The States vs. D.C.: Episodes in American History They Don't Teach
  in School, Part 1</em>
(80 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14342518" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Thomas Woods:
<em>The States vs. D.C.: Episodes in American History They Don't Teach
  in School, Part 2 </em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14342956" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>


Mike Rothfeld:
<em>Basics of Effective Communication, Part 1</em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14340779" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Mike Rothfeld:
<em>Basics of Effective Communication, Part 2</em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14341650" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Mike Rothfeld:
<em>Basic Fundraising Strategies, Part 1</em>
(81 MB, 30 minutes)
<br>
<br>

<div align='center'>
  <iframe src="http://player.vimeo.com/video/14251487" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Mike Rothfeld:
<em>Basic Fundraising Strategies, Part 2</em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14251597" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Mike Rothfeld:
<em>Basic Fundraising Strategies, Part 3</em>
(24 MB, 8 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14251737" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<a
  href='http://www.tvw.org/media/mediaplayer.cfm?evid=2009050125&CFID=4372358&CFTOKEN=93213987&bhcp=1'
  target='_blank'>Cary Condotta and Matt Shea: <em>How A Bill Becomes A
    Law</em> </a>
(76 minutes, embedded video on Washington public television, seems to
work best in Internet Explorer, strangely)
<br>
<br>

John Tate:
<em>Face to Face Fundraising, Part 1</em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14342175" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

John Tate:
<em>Face to Face Fundraising, Part 2</em>
(81 MB, 30 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14342207" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

John Tate:
<em>Face to Face Fundraising, Part 3</em>
(6 MB, 2 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14342470" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Q & A with John Tate and Mike Rothfeld (81 MB, 30 minutes) (missing a
bit of the beginning)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14341655" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>
<br>
  <?php  } if ($_REQUEST['conference'] == 'vegas') { ?>

<h5>Conference 3: Las Vegas</h5>
<br>

<table id='highlight2' cellpadding='10'>
  <tr>
    <td><big><b>Freedom Celebration</b> </big><br> <br> Sneak peek: <em>For
        Liberty</em>, the upcoming documentary on the Ron Paul
      Revolution (89 MB, 14 minutes)<br> Matt Hawes and Mark Skousen (64
      MB, 11 minutes)<br> Thomas Woods (167 MB, 26 minutes)<br> Ron Paul
      (439 MB, 68 minutes)</td>
  </tr>
</table>
<br>

Michael Rothfeld:
<em>The Real Nature of Politics and Politicians</em>
(535 MB, 82 minutes)
<br>


&nbsp; &nbsp; &nbsp; Lecture Worksheet (0.03 MB)
<br>
<br>

<div align='center'>
  <iframe src="http://player.vimeo.com/video/14251774" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Thomas Woods:
<em>Sound Money, Sound Economy</em>
(238 MB, 53 minutes)
<br>
<br>

&nbsp; &nbsp; &nbsp; Lecture Outline (0.03 MB)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14297472" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Kirk Shelley:
<em>Recruiting and Vetting Candidates</em>
(285 MB, 53 minutes)
<br>
<br>

&nbsp; &nbsp; &nbsp; Lecture Worksheet (0.09 MB)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14297873" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Kirk Shelley:
<em>Tactical Skills</em>
(403 MB, 62 minutes)
<br>
<br>

&nbsp; &nbsp; &nbsp; Lecture Worksheet (0.02 MB)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14299017" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Jeff Greenspan:
<em>How to Be the Life of the Party</em>
(356 MB, 55 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14343317" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Eric Gardner:
<em>Social Media and Liberty</em>
(433 MB, 67 minutes)
<br>
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14344751" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

  <?php  } if ($_REQUEST['conference'] == 'valleyforge') { ?>

<h5>Conference 4: Valley Forge</h5>
<br>

<table id='highlight2' cellpadding='10' align='center'>
  <tr>
    <td><big><b>Freedom Celebration</b> </big><br> <br> Phil Giraldi
      (142 MB, 22 minutes)<br> <br>
      <div align='center'>
        <iframe src="http://player.vimeo.com/video/6711491" width="400"
          height="300" frameborder="0"></iframe>
      </div> <br> <br> Mike Doherty (117 MB, 23 minutes)<br> <br>
      <div align='center'>
        <iframe src="http://player.vimeo.com/video/6715836" width="400"
          height="300" frameborder="0"></iframe>
      </div> <br> <br> Ron Paul (406 MB, 63 minutes)
      <div align='center'>
        <iframe src="http://player.vimeo.com/video/14299777" width="400"
          height="300" frameborder="0"></iframe>
      </div> <br> <br>
    </td>
  </tr>
</table>
<br>

Debbie Hopper:
<em>Why Valley Forge?</em>
(90 MB, 13 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14393110" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Michael Rothfeld:
<em>The Real Nature of Politics and Politicians</em>
(680 MB, 95 minutes) (audio clears up after the beginning)
<br>
&nbsp; &nbsp; &nbsp; Lecture worksheet
<br>
<br>
(Note: this lecture is similar to those given at previous
conferences.&nbsp; But, there are points of novelty in each lecture, and
this is critical material that will sink in better by being watched over
and over)
<br>
<br>

Michael Rothfeld:
<em>Building a Donor Base</em>
(198 MB, 31 minutes)
<br>
&nbsp; &nbsp; &nbsp; Lecture worksheet
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14393357" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<table id='highlight2' cellpadding='10'>
  <tr>
    <td><big><b>Lunch</b> </big><br> <br> Judge Andrew Napolitano (355
      MB, 60 minutes)<br>
    </td>
  </tr>
</table>
<br>

Michael Rothfeld:
<em>Being a Leader and Promoting New Leaders</em>
(221 MB, 34 minutes)
<br>
&nbsp; &nbsp; &nbsp; Lecture worksheet
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14394759" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Dimitri Kesari:
<em>Recruiting and Working With Volunteers</em>
(172 MB, 27 minutes)
<br>
&nbsp; &nbsp; &nbsp; Lecture worksheet
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14649309" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Thomas Woods:
<em>Where Do Our Rights Come From?</em>
(345 MB, 53 minutes)
<br>
&nbsp; &nbsp; &nbsp; Lecture worksheet
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14647899" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>


Dimitri Kesari:
<em>Building Your Plan</em>
(307 MB, 47 minutes)
<br>
&nbsp; &nbsp; &nbsp; Lecture worksheet
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14303297" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Michael Rothfeld:
<em>Keys to Changing Policy</em>
(16 KB web page)
<br>
<br>
Because Rothfeld's lecture includes personal anecdotes in which he names
many names, the author does not permit this lecture to be taped.&nbsp;
He has, however, permitted us to release these lecture notes for our
benefit.
<br>
<br>

Q & A with Michael Rothfeld and Dimitri Kesari (189 MB, 29 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14682873" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>



<table id='highlight2' cellpadding='10'>
  <tr>
    <td><big><b>Economic Liberty Symposium</b> </big><br> <br> Thomas
      Woods (246 MB, 39 minutes)<br> Peter Schiff (343 MB, 53 minutes)<br>
      Daniel Hannan (144 MB, 22 minutes)</td>
  </tr>
</table>
<br>
<br>
<br>

  <?php  } if ($_REQUEST['conference'] == 'atlanta') { ?>

<h5>Conference 5: Atlanta</h5>
<br>

<table id='highlight2' cellpadding='10'>
  <tr>
    <td><big><b>Freedom Celebration</b> </big><br> <br> <a
      href='http://www.youtube.com/campaignforliberty#p/u/3/WyH9k8pGRiw'>John
        Tate (YouTube, 7 minutes)</a><br> <a
      href='http://www.youtube.com/campaignforliberty#p/u/15/IT2Mxn1euIg'>Matt
        Hawes, Valerie Meyers (YouTube, 9 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/14/Vbw1lmG7jhc'>Thomas
        Woods (YouTube, 8 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/13/1muUHU4xkQ0'>Thomas
        Woods, continued (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/12/bk3GSNlhtaY'>Thomas
        Woods, continued (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/12/CznasEMr0zI'>Bobby
        Franklin, Ron Paul (YouTube, 8 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/16/8NjJ2MxocUU'>Ron
        Paul, continued (YouTube, 9 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/15/0byGBOMnSpQ'>Ron
        Paul, continued (YouTube, 9 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/14/Tu1pmcROzD8'>Ron
        Paul, continued (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/campaignforliberty#p/u/13/i7aiVIS43Zw'>Ron
        Paul, continued (YouTube, 8 minutes) </a>
    </td>
  </tr>
</table>
<br>

Michael Rothfeld:
<em>The Real Nature of Politics and Politicians</em>
(699 MB, 108 minutes)
<br>
&nbsp; &nbsp; &nbsp; Lecture worksheet
<br>
<br>
(Note: this lecture is similar to those given at previous
conferences.&nbsp; But, there are points of novelty in each lecture, and
this is critical material that will sink in better by being watched over
and over)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14013999" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

John Tate:
<em>Choosing Battles</em>
(290 MB, 31 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14037117" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Dimitri Kesari:
<em>Inside Operations</em>
(344 MB, 55 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14041451" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>
Michael Rothfeld:
<em>Targeting Legislators</em>
(288 MB, 44 minutes)
<br>
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14042827" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

  <?php  } if ($_REQUEST['conference'] == 'cpac2010') { ?>

<h5>Campaign For Liberty at CPAC 2010</h5>
<br>


Liberty Forum with Congressman Ron Paul, Judge Andrew Napolitano, and
Thomas Woods
<br>
<a href='http://www.youtube.com/watch?v=iL64tlt9_lg'>Part 1<br> </a>
<a href='http://www.youtube.com/watch?v=qjqSAmx9-P4'>Part 2<br> </a>
<a href='http://www.youtube.com/watch?v=SroTLVq8GOw'>Part 3<br> </a>
<a href='http://www.youtube.com/watch?v=5PfxU97IIVA'>Part 4<br> </a>
<a href='http://www.youtube.com/watch?v=yK4cQAvIsns'>Part 5<br> </a>
<a href='http://www.youtube.com/watch?v=UeSk6r9Q3JU'>Part 6<br> </a>
<a href='http://www.youtube.com/watch?v=uebOx7Qglec'>Part 7<br> </a>
<br>
<a href='http://www.ustream.tv/recorded/4850701' target='_blank'>Ron
  Paul Addresses CPAC</em> (UStream, 30 minutes)<br> <br> </a>

<table align='center' id='highlight2' cellpadding='10'
  style='border: 1px solid #000;'>
  <tr>
    <td>Gov. Gary Johnson Addresses CPAC at the Our American Dream Panel<br>
      <br> <object width="480" height="385">
        <param name="movie"
          value="http://www.youtube.com/v/hwmuMyjWg2U&hl=en_US&fs=1&"></param>
        <param name="allowFullScreen" value="true"></param>
        <param name="allowscriptaccess" value="always"></param>
        <embed src="http://www.youtube.com/v/hwmuMyjWg2U&hl=en_US&fs=1&"
          type="application/x-shockwave-flash"
          allowscriptaccess="always" allowfullscreen="true" width="480"
          height="385"></embed>
      </object> <br> <object width="480" height="385">
        <param name="movie"
          value="http://www.youtube.com/v/DdWVo3aLKWY&hl=en_US&fs=1&"></param>
        <param name="allowFullScreen" value="true"></param>
        <param name="allowscriptaccess" value="always"></param>
        <embed src="http://www.youtube.com/v/DdWVo3aLKWY&hl=en_US&fs=1&"
          type="application/x-shockwave-flash"
          allowscriptaccess="always" allowfullscreen="true" width="480"
          height="385"></embed>
      </object><br> <object width="480" height="385">
        <param name="movie"
          value="http://www.youtube.com/v/oeCRAYygCeU&hl=en_US&fs=1&"></param>
        <param name="allowFullScreen" value="true"></param>
        <param name="allowscriptaccess" value="always"></param>
        <embed src="http://www.youtube.com/v/oeCRAYygCeU&hl=en_US&fs=1&"
          type="application/x-shockwave-flash"
          allowscriptaccess="always" allowfullscreen="true" width="480"
          height="385"></embed>
      </object><br> <br> <Br>
    </td>
  </tr>
</table>
<br>


<em>Why Real Conservatives are Against the War on Terrorism</em>
&nbsp;(97 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/9631960" width="400"
    height="300" frameborder="0"></iframe>
  <iframe src="http://player.vimeo.com/video/9632511" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>



<br>
  <?php  } if ($_REQUEST['conference'] == 'iowa') { ?>
<h5>Conference 6: Iowa</h5>
<br>

Kirk Shelley:
<em>Tactics</em>
(259 MB, 57 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14394034" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Kirk Shelley:
<em>Precinct Organization: Why and How</em>
(407 MB, 89 minutes)
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14045549" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Lecture Notes Worksheet (3 MB PDF)
<br>
<br>

<table id='highlight2' cellpadding='10' align='center'>
  <tr>
    <td><big><b>Forum on the Future of Conservatism</b> </big><br>Thomas
      Woods, emcee<br> <br> <a
      href='http://www.youtube.com/campaignforliberty#p/u/3/WyH9k8pGRiw'>John
        Tate (YouTube, 7 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=vVD_6kacJmM'>Daniel McCarthy
        on the History of Conservatism (YouTube, 9 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=ZbqkgjM9y8c'>Daniel McCarthy
        on the History of Conservatism, part 2 (YouTube, 9 minutes)<br>
    </a> <a href='http://www.youtube.com/watch#!v=8Jl5IlmU5jU'>Daniel
        McCarthy on the History of Conservatism, part 3 (YouTube, 6
        minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=0ju4QzxVc9A'>Daniel McCarthy
        on the History of Conservatism, part 4 (YouTube, 8 minutes)<br>
    </a> <a href='http://www.youtube.com/watch#!v=POK5sS3H5uQ'>Robert
        Murphy on Money and Debt (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=UlfOOuuju9o'>Robert Murphy
        on Money and Debt, part 2 (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=WGcXhUw2xu4'>Robert Murphy
        on Money and Debt, part 3 (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=rHnopsana5c'>Robert Murphy
        on Money and Debt, part 4 (YouTube, 5 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=l8qd9T9jH1I'>Robert Murphy
        on Money and Debt, part 5 (YouTube, 6 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=IgiStYzLqSU'>Thomas Woods on
        a Free Market Recovery Plan (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/watch#!v=rHhnHxtDS9Y'>Thomas Woods on
        a Free Market Recovery Plan, part 2 (YouTube, 11 minutes)<br> </a>
      <a href='http://www.youtube.com/watch#!v=ELs4z_YdQZI'>Thomas Woods
        on a Free Market Recovery Plan, part 3 (YouTube, 9 minutes)<br>
    </a> <a href='http://www.youtube.com/watch#!v=b9-Xu7jHaYs'>Thomas
        Woods on a Free Market Recovery Plan, part 4 (YouTube, 4
        minutes)<br> </a> <a
      href='http://www.youtube.com/watch?v=eAcOluxWycQ'>Q & A (YouTube,
        9 minutes)<br> </a> <a
      href='http://www.youtube.com/watch?v=WCEBG6s4Rv8'>Q & A, part 2
        (YouTube, 7 minutes)<br> </a> <a
      href='http://www.youtube.com/view_play_list?p=EF0571781729832A'>Doug
        Bandow on Foreign Policy (YouTube, 10 minutes)<br> </a> <a
      href='http://www.youtube.com/watch?v=sh3oEgzUf34&feature=PlayList&p=EF0571781729832A&playnext_from=PL&index=1'>Doug
        Bandow on Foreign Policy, part 2 (YouTube, 10 minutes)<br> </a>
      <a
      href='http://www.youtube.com/watch?v=3dCGtDif3cA&feature=PlayList&p=EF0571781729832A&playnext_from=PL&index=2'>Doug
        Bandow on Foreign Policy, part 3 (YouTube, 9 minutes)<br> </a>
    </td>
  </tr>
</table>
<br>

<br>
<br>
  <?php  } if ($_REQUEST['conference'] == 'fl2010') { ?>
<h5>Florida Liberty Summit 2010</h5>
<br>

Video 1
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14949697" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 2
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14950734" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 3
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14951371" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 4
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14951915" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 5
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14952327" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 6
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14952629" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 7
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14952833" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 8
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14953268" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

Video 9
<br>
<br>
<div align='center'>
  <iframe src="http://player.vimeo.com/video/14953762" width="400"
    height="300" frameborder="0"></iframe>
</div>
<br>
<br>

<?
		}
	