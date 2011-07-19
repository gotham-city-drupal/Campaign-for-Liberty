<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function piropublic_community_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'type' => 'page',
    'language' => '',
    'uid' => '0',
    'status' => '1',
    'comment' => '0',
    'promote' => '0',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '1',
    'title' => 'Community',
    'body' => '<?php
          
                  $mod_path = drupal_get_path(\'module\', \'community_map\');
                  global $base_path;
                  drupal_add_js($mod_path . \'/community_map.js\');
          
                  ?>
          
                  <h2>Select Your State</h2>
                  <div id="floatingnamediv" ><h3>&nbsp;</h3>
                  </div>
          
                  <img src="<?php print $base_path . $mod_path;?>/Community-Map.jpg" width="950" height="830" border="0" usemap="#map" />
          
                  <map name="map">
                  <!-- #$-:Image map file created by GIMP Image Map plug-in -->
                  <!-- #$-:GIMP Image Map plug-in by Maurits Rijk -->
                  <!-- #$-:Please do not edit lines starting with "#$" -->
                  <!-- #$VERSION:2.3 -->
                  <!-- #$AUTHOR: -->
                  <area shape="poly" class="community_map_area" coords="212,99,207,117,211,126,209,130,221,148,217,165,219,169,225,167,234,192,260,194,262,185,349,196,356,122,281,113,212,100" alt="Montana" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="367,123,363,179,460,185,460,174,457,170,456,151,453,143,452,127,368,122" alt="North Dakota" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="361,187,357,242,430,246,437,251,446,250,458,256,459,203,454,199,458,196,458,191,361,187" alt="South Dakota" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="462,125,490,126,504,132,512,132,532,141,540,137,556,141,556,144,543,151,527,169,526,180,520,185,522,189,521,201,526,204,541,217,541,226,471,227,471,194,465,187,470,182,469,175,466,161,467,152,463,142,463,125" alt="Minnesota" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="566,156,567,163,564,164,567,166,595,175,600,179,604,191,609,182,614,184,608,197,605,211,603,224,604,239,566,241,564,238,560,238,557,229,558,226,555,224,555,218,554,216,536,202,535,190,537,189,537,188,533,186,533,182,541,176,541,165,544,162,547,164,558,157,566,157" alt="Wisconsin" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="601,120,591,120,584,128,578,133,574,132,566,138,570,146,591,150,594,150,598,154,600,164,606,166,610,154,612,154,615,158,617,154,623,148,630,155,621,164,618,180,618,190,624,206,618,223,665,219,669,208,670,208,671,202,676,201,676,191,669,174,663,174,660,173,660,156,643,145,655,145,655,140,651,138,648,138,647,132,635,133,636,128,629,128,628,131,619,132,616,135,606,135,596,128,602,122" alt="Michigan" href="#mapanchor"   />
                  <area shape="poly" class="community_map_area" coords="107,238,187,256,166,362,161,364,157,361,155,377,152,382,93,292,107,237" alt="Nevada" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="258,199,350,209,344,285,247,273" alt="Wyoming" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="272,293,368,303,364,378,262,368,272,293" alt="Colorado" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="40,226,96,242,82,295,139,382,144,397,140,400,137,401,136,407,133,412,132,415,135,418,134,421,132,425,91,420,90,407,83,395,78,395,78,389,74,388,67,384,67,380,56,375,51,375,50,371,50,366,51,360,49,358,50,355,49,354,42,336,40,329,43,328,45,325,40,323,37,319,38,305,35,297,29,284,30,273,32,271,32,266,28,258,28,252,35,246,38,238,37,231" alt="California" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="196,258,238,265,235,283,262,287,251,362,178,350" alt="Utah" href="#mapanchor"   />
                  <area shape="poly" class="community_map_area" coords="248,377,234,481,201,476,148,446,150,438,154,439,155,437,153,436,152,432,153,427,157,424,157,419,161,415,164,416,164,414,161,411,161,407,159,402,161,396,162,379,169,379,172,383,175,365" alt="Arizona" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="256,384,344,394,337,487,285,482,285,486,259,483,258,490,242,489" alt="New Mexico" href="#mapanchor"   />
                  <area shape="poly" class="community_map_area" coords="360,393,483,396,485,421,485,460,478,459,474,455,461,456,456,459,452,457,447,456,444,459,442,457,437,454,435,456,431,455,429,451,427,451,423,451,418,450,416,449,413,449,413,446,406,446,401,441,403,407,361,405" alt="Oklahoma" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="486,548,479,550,472,554,462,563,440,576,432,588,432,599,434,606,434,614,431,615,429,616,422,613,413,612,400,605,394,590,394,583,390,583,382,570,376,554,366,545,348,543,346,552,339,557,317,542,315,535,313,526,290,501,290,495,344,499,350,419,396,422,396,456,398,459,403,458,407,463,410,464,422,465,424,468,438,469,445,470,446,472,460,469,464,468,473,474,482,476,483,505,487,508,487,513,491,519,491,528,489,530,489,540,486,545" alt="Texas" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="377,322,373,381,481,384,482,341,478,340,477,337,475,335,478,333,478,329,471,326" alt="Kansas" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="354,253,430,258,434,261,445,260,456,266,463,285,465,301,468,307,473,315,376,313,377,294,351,292" alt="Nebraska" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="496,462,542,461,546,474,541,485,537,496,565,496,565,503,568,511,573,510,580,515,578,532,570,537,569,531,563,530,558,534,545,534,539,531,539,527,519,527,509,523,501,526,498,521,502,515,500,510,503,503,503,497,499,491,498,485,496,483" alt="Louisiana" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="490,391,557,389,556,396,557,398,563,397,565,401,562,405,559,411,557,418,552,431,547,437,546,443,546,456,498,457,499,448,492,445,493,412" alt="Arkansas" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="528,300,534,306,534,316,544,325,545,329,554,332,550,343,562,353,564,361,570,366,569,374,565,375,561,385,550,385,553,378,488,379,489,331,481,324,484,319,477,314,475,310,473,303,497,303" alt="Missouri" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="464,235,465,242,466,244,463,250,470,267,470,274,473,275,473,279,473,286,476,291,529,290,534,294,540,289,543,278,540,274,540,273,546,273,550,269,552,264,552,259,543,248,540,247,537,243,539,240,536,234" alt="Iowa" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="555,256,595,253,595,258,601,267,603,314,605,321,604,325,600,332,599,341,599,343,598,345,594,348,594,354,589,354,586,352,583,357,579,357,575,351,576,347,573,342,569,342,562,335,565,326,565,322,560,324,557,316,546,307,545,296,546,291,551,289,552,284,550,280,552,274,556,275,559,272,561,269,561,266" alt="Illinois" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="650,242,622,245,617,249,612,245,615,296,616,300,611,311,611,320,618,320,620,318,625,320,628,316,631,319,635,313,641,316,643,309,649,303,649,301,651,300,657,298" alt="Indiana" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="181,94,112,76,110,81,104,84,108,88,108,92,96,87,88,80,85,86,84,90,86,94,85,106,83,119,87,123,95,127,96,137,101,141,111,141,117,144,145,144,170,150,171,137" alt="Washington" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="76,136,92,141,91,150,97,153,105,152,110,155,139,156,161,162,166,170,158,183,152,189,155,196,145,235,50,210,50,198,52,196,50,192,56,185,62,177" alt="Oregon" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="185,112,199,114,196,133,198,139,198,144,208,159,211,159,209,167,206,179,211,177,214,180,217,194,220,195,221,201,236,202,240,199,245,205,237,252,157,237,164,202,167,199,167,197,164,195,164,190,170,184,178,173,178,171,174,167,174,163" alt="Idaho" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="42,567,63,545,90,548,152,572,213,598,246,618,288,659,304,680,261,714,44,573" alt="Hawaii" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="706,687,712,686,714,684,720,685,720,688,733,700,735,696,741,686,748,689,749,691,754,694,754,696,760,699,779,719,786,722,796,725,799,738,796,746,787,746,786,751,782,750,779,753,772,746,768,746,766,742,767,739,764,741,751,728,747,728,747,723,740,716,740,713,736,711,715,700,702,697,698,696,691,696,682,701,680,698,681,696,677,694,671,695,665,697,662,703,651,702,651,706,647,706,634,715,633,735,621,745,617,748,607,755,576,767,496,780,432,773,409,771,397,764,362,728,356,715,367,718,403,753,457,768,493,770,527,761,537,756,546,755,547,750,554,750,558,746,563,745,569,745,582,736,590,728,593,718,589,717,585,720,581,718,581,715,577,716,567,717,560,713,563,708,562,702,565,699,564,697,561,695,559,697,553,697,549,690,545,690,539,694,530,686,529,681,544,681,547,680,547,678,544,677,543,674,542,669,542,665,544,664,544,660,548,659,554,654,558,648,560,645,567,650,568,648,569,643,574,643,577,646,579,646,579,640,576,634,572,638,566,635,558,634,549,630,548,623,546,618,542,613,546,608,549,608,557,605,572,604,570,593,558,580,561,575,563,570,566,570,567,571,574,571,578,566,580,559,587,555,594,553,601,548,605,548,608,548,614,542,624,549,634,550,636,554,636,556,641,553,647,554,653,555,660,558,665,560,668,559,674,557,687,563" alt="Alaska" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="648,490,692,486,694,491,734,489,733,485,737,482,740,483,746,484,749,496,758,512,767,522,767,528,778,547,781,570,779,573,781,574,780,578,772,588,764,592,751,597,748,596,749,592,754,594,757,590,767,588,774,583,763,585,761,580,760,576,757,573,750,573,748,565,744,565,741,562,740,556,730,546,728,539,728,532,729,532,729,526,727,524,727,519,722,519,710,505,704,505,702,509,692,516,688,514,685,514,683,508,674,504,668,503,656,506,652,506,652,500,650,496" alt="Florida" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="882,59,888,59,889,63,896,58,904,61,911,84,916,86,918,91,922,93,927,98,919,110,914,118,908,121,906,123,897,129,894,131,887,143,882,140,880,139,871,103,874,99,877,94,876,87" alt="Maine" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="866,109,877,144,881,148,881,154,878,155,875,159,857,163,855,159,855,145,855,142,856,141,856,131,859,129,860,127,861,126,861,124,859,124,860,112" alt="New Hampshire" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="853,112,856,123,851,129,851,154,852,159,839,160,836,146,833,146,831,135,833,132,831,118" alt="Vermont" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="849,170,875,165,879,160,884,162,887,164,885,170,884,171,888,172,892,178,894,177,892,173,893,170,901,178,901,187,889,191,877,181,850,186" alt="Massachusetts" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="866,188,873,184,881,194,874,202,869,202" alt="Rhode Island" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="872,204,875,220,861,226,851,233,848,229,850,226,848,210" alt="Connecticut" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="842,261,854,260,854,254,852,250,849,249,843,239,844,235,842,233,836,237,840,251" alt="Delaware" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="813,205,829,210,826,219,830,221,830,236,828,241,824,249,822,252,819,251,819,247,810,244,808,239,810,234,817,229,809,221" alt="New Jersey" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="751,204,807,192,812,195,815,200,830,205,831,213,837,212,852,204,860,197,860,194,851,194,848,199,843,199,840,203,838,202,838,199,840,198,837,196,836,170,833,157,828,150,827,146,829,146,829,143,826,139,825,130,802,135,793,149,787,155,787,161,792,164,786,170,780,171,778,171,766,171,756,177,759,185,758,187,752,195" alt="New York" href="#mapanchor"/>
                  <area shape="poly" class="community_map_area" coords="780,262,781,276,786,273,788,270,791,269,791,267,795,268,799,265,802,264,806,268,808,268,808,271,815,274,814,282,830,287,832,283,835,289,847,284,848,273,838,274,832,253" alt="Maryland" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="655,227,676,223,680,226,683,223,687,226,689,228,691,228,693,225,697,225,714,213,718,239,717,258,707,268,707,274,702,276,701,284,696,285,690,282,689,281,685,282,678,283,675,281,670,281,668,277,661,276" alt="Ohio" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="724,214,735,205,737,211,793,200,798,203,801,209,805,209,805,212,802,218,801,224,810,232,802,242,798,243,798,245,731,257" alt="Pennsylvania" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="714,397,717,391,727,386,750,384,754,388,770,386,788,401,782,410,781,417,760,440,755,441,753,439,753,436,750,433,747,432,747,428,744,425,741,424,738,420,738,418,735,416,734,416" alt="South Carolina" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="733,346,766,342,816,332,825,346,826,357,821,361,816,368,814,372,809,371,806,372,799,379,798,384,798,389,794,389,792,388,789,388,786,391,768,377,750,379,749,375,731,375,719,381,699,383,698,375,702,373,707,368,710,368,716,363,717,360,722,357,725,357,727,354,730,354,731,351,733,350" alt="North Carolina" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="706,343,706,340,711,337,717,333,729,320,731,320,733,324,734,325,735,324,737,323,741,322,750,318,750,312,754,308,756,301,757,296,759,296,762,298,764,290,771,285,772,277,779,281,781,279,787,279,788,282,795,286,795,290,792,293,796,293,796,296,808,300,822,294,817,315,815,317,820,325,778,334,742,339" alt="Virginia" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="701,303,701,296,705,295,707,292,705,288,708,284,710,284,712,278,715,275,718,275,721,271,722,256,721,254,723,252,726,252,727,257,729,268,743,265,744,272,751,267,760,263,767,268,766,276,760,273,756,281,752,286,749,292,743,292,741,300,739,305,738,311,727,316,718,319" alt="West Virginia" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="598,358,600,354,603,353,604,345,608,341,612,344,614,339,618,337,618,333,621,329,625,327,631,328,637,326,639,327,643,321,647,325,648,321,653,317,653,311,660,310,662,303,669,303,673,307,680,308,685,309,689,306,694,310,696,312,698,318,701,324,708,327,698,338,685,350,635,354,625,355,622,358" alt="Kentucky" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="578,401,578,397,581,395,580,392,580,389,582,388,583,384,586,384,588,370,609,369,609,366,652,363,702,356,702,365,698,365,698,369,693,368,691,372,687,372,679,381,674,381,670,387,668,388,668,393" alt="Tennessee" href="#mapanchor"/>
                  <area shape="poly" class="community_map_area" coords="569,406,568,410,566,411,566,419,564,419,561,422,559,425,558,430,556,432,556,438,558,439,559,464,554,471,553,483,581,482,581,488,587,496,590,494,591,492,594,495,597,495,597,494,606,494,606,481,604,467,604,406" alt="Mississippi" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="615,405,618,410,617,467,619,490,622,494,633,493,638,490,639,483,634,479,647,479,674,476,673,471,672,468,672,462,671,458,672,453,673,451,672,449,668,442,664,428,658,403" alt="Alabama" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="666,401,706,397,706,399,703,403,705,404,710,406,717,416,720,416,728,423,734,430,743,444,747,445,747,448,744,452,743,458,741,463,740,472,734,472,733,473,733,479,728,480,727,477,687,479,685,479,681,469,681,463,678,460,680,456,680,450,680,446,677,443" alt="Georgia" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="798,280,801,275,805,279,804,284" alt="District of Columbia" href="#mapanchor" />
          
                  </map>
          
                  <form action="#" method="post" onsubmit="return false;">
          
                  Or select state with this pull-down: <select id="communitymapstateselect">
          
                  <option value=""></option>
                  <option value="Alabama">Alabama</option>
                  <option value="Alaska">Alaska</option>
                  <option value="Arizona">Arizona</option>
                  <option value="Arkansas">Arkansas</option>
                  <option value="California">California</option>
                  <option value="Colorado">Colorado</option>
                  <option value="Connecticut">Connecticut</option>
                  <option value="Delaware">Delaware</option>
                  <option value="District of Columbia">District of Columbia</option>
                  <option value="Florida">Florida</option>
                  <option value="Georgia">Georgia</option>
                  <option value="Hawaii">Hawaii</option>
                  <option value="Idaho">Idaho</option>
                  <option value="Illinois">Illinois</option>
                  <option value="Indiana">Indiana</option>
                  <option value="Iowa">Iowa</option>
                  <option value="Kansas">Kansas</option>
                  <option value="Kentucky">Kentucky</option>
                  <option value="Louisiana">Louisiana</option>
                  <option value="Maine">Maine</option>
                  <option value="Maryland">Maryland</option>
                  <option value="Massachusetts">Massachusetts</option>
                  <option value="Michigan">Michigan</option>
                  <option value="Minnesota">Minnesota</option>
                  <option value="Mississippi">Mississippi</option>
                  <option value="Missouri">Missouri</option>
                  <option value="Montana">Montana</option>
                  <option value="Nebraska">Nebraska</option>
                  <option value="Nevada">Nevada</option>
                  <option value="New Hampshire">New Hampshire</option>
                  <option value="New Jersey">New Jersey</option>
                  <option value="New Mexico">New Mexico</option>
                  <option value="New York">New York</option>
                  <option value="North Carolina">North Carolina</option>
                  <option value="North Dakota">North Dakota</option>
                  <option value="Ohio">Ohio</option>
                  <option value="Oklahoma">Oklahoma</option>
                  <option value="Oregon">Oregon</option>
                  <option value="Pennsylvania">Pennsylvania</option>
                  <option value="Rhode Island">Rhode Island</option>
                  <option value="South Carolina">South Carolina</option>
                  <option value="South Dakota">South Dakota</option>
                  <option value="Tennessee">Tennessee</option>
                  <option value="Texas">Texas</option>
                  <option value="Utah">Utah</option>
                  <option value="Vermont">Vermont</option>
                  <option value="Virginia">Virginia</option>
                  <option value="Washington">Washington</option>
                  <option value="West Virginia">West Virginia</option>
                  <option value="Wisconsin">Wisconsin</option>
                  <option value="Wyoming">Wyoming</option>
          
                  </select>
          
                  </form>
          
                  <a name="mapanchor" id="mapanchor" />
                  <div id="communitymapstatelistdiv" style="display: none;">
                  <h3>State Group</h3>
                  <ul id="communitymapstatelist">
          
                  </ul>
          
                  </div>
          
          
                  <div id="communitymapdistrictlistdiv" style="display: none;">
                  <h3>Region Groups</h3>
          
          
                  </div>
          
          
                  <div id="communitymapcountylistdiv" style="display: none;">
                  <h3>County Groups</h3>
          
          
                  </div>
                  ',
    'teaser' => '<?php
          
                  $mod_path = drupal_get_path(\'module\', \'community_map\');
                  global $base_path;
                  drupal_add_js($mod_path . \'/community_map.js\');
          
                  ?>
          
                  <h2>Select Your State</h2>
                  <div id="floatingnamediv" ><h3>&nbsp;</h3>
                  </div>
          
                  <img src="<?php print $base_path . $mod_path;?>/Community-Map.jpg" width="950" height="830" border="0" usemap="#map" />
          
                  <map name="map">
                  <!-- #$-:Image map file created by GIMP Image Map plug-in -->
                  <!-- #$-:GIMP Image Map plug-in by Maurits Rijk -->
                  <!-- #$-:Please do not edit lines starting with "#$" -->
                  <!-- #$VERSION:2.3 -->
                  <!-- #$AUTHOR: -->
                  <area shape="poly" class="community_map_area" coords="212,99,207,117,211,126,209,130,221,148,217,165,219,169,225,167,234,192,260,194,262,185,349,196,356,122,281,113,212,100" alt="Montana" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="367,123,363,179,460,185,460,174,457,170,456,151,453,143,452,127,368,122" alt="North Dakota" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="361,187,357,242,430,246,437,251,446,250,458,256,459,203,454,199,458,196,458,191,361,187" alt="South Dakota" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="462,125,490,126,504,132,512,132,532,141,540,137,556,141,556,144,543,151,527,169,526,180,520,185,522,189,521,201,526,204,541,217,541,226,471,227,471,194,465,187,470,182,469,175,466,161,467,152,463,142,463,125" alt="Minnesota" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="566,156,567,163,564,164,567,166,595,175,600,179,604,191,609,182,614,184,608,197,605,211,603,224,604,239,566,241,564,238,560,238,557,229,558,226,555,224,555,218,554,216,536,202,535,190,537,189,537,188,533,186,533,182,541,176,541,165,544,162,547,164,558,157,566,157" alt="Wisconsin" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="601,120,591,120,584,128,578,133,574,132,566,138,570,146,591,150,594,150,598,154,600,164,606,166,610,154,612,154,615,158,617,154,623,148,630,155,621,164,618,180,618,190,624,206,618,223,665,219,669,208,670,208,671,202,676,201,676,191,669,174,663,174,660,173,660,156,643,145,655,145,655,140,651,138,648,138,647,132,635,133,636,128,629,128,628,131,619,132,616,135,606,135,596,128,602,122" alt="Michigan" href="#mapanchor"   />
                  <area shape="poly" class="community_map_area" coords="107,238,187,256,166,362,161,364,157,361,155,377,152,382,93,292,107,237" alt="Nevada" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="258,199,350,209,344,285,247,273" alt="Wyoming" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="272,293,368,303,364,378,262,368,272,293" alt="Colorado" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="40,226,96,242,82,295,139,382,144,397,140,400,137,401,136,407,133,412,132,415,135,418,134,421,132,425,91,420,90,407,83,395,78,395,78,389,74,388,67,384,67,380,56,375,51,375,50,371,50,366,51,360,49,358,50,355,49,354,42,336,40,329,43,328,45,325,40,323,37,319,38,305,35,297,29,284,30,273,32,271,32,266,28,258,28,252,35,246,38,238,37,231" alt="California" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="196,258,238,265,235,283,262,287,251,362,178,350" alt="Utah" href="#mapanchor"   />
                  <area shape="poly" class="community_map_area" coords="248,377,234,481,201,476,148,446,150,438,154,439,155,437,153,436,152,432,153,427,157,424,157,419,161,415,164,416,164,414,161,411,161,407,159,402,161,396,162,379,169,379,172,383,175,365" alt="Arizona" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="256,384,344,394,337,487,285,482,285,486,259,483,258,490,242,489" alt="New Mexico" href="#mapanchor"   />
                  <area shape="poly" class="community_map_area" coords="360,393,483,396,485,421,485,460,478,459,474,455,461,456,456,459,452,457,447,456,444,459,442,457,437,454,435,456,431,455,429,451,427,451,423,451,418,450,416,449,413,449,413,446,406,446,401,441,403,407,361,405" alt="Oklahoma" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="486,548,479,550,472,554,462,563,440,576,432,588,432,599,434,606,434,614,431,615,429,616,422,613,413,612,400,605,394,590,394,583,390,583,382,570,376,554,366,545,348,543,346,552,339,557,317,542,315,535,313,526,290,501,290,495,344,499,350,419,396,422,396,456,398,459,403,458,407,463,410,464,422,465,424,468,438,469,445,470,446,472,460,469,464,468,473,474,482,476,483,505,487,508,487,513,491,519,491,528,489,530,489,540,486,545" alt="Texas" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="377,322,373,381,481,384,482,341,478,340,477,337,475,335,478,333,478,329,471,326" alt="Kansas" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="354,253,430,258,434,261,445,260,456,266,463,285,465,301,468,307,473,315,376,313,377,294,351,292" alt="Nebraska" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="496,462,542,461,546,474,541,485,537,496,565,496,565,503,568,511,573,510,580,515,578,532,570,537,569,531,563,530,558,534,545,534,539,531,539,527,519,527,509,523,501,526,498,521,502,515,500,510,503,503,503,497,499,491,498,485,496,483" alt="Louisiana" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="490,391,557,389,556,396,557,398,563,397,565,401,562,405,559,411,557,418,552,431,547,437,546,443,546,456,498,457,499,448,492,445,493,412" alt="Arkansas" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="528,300,534,306,534,316,544,325,545,329,554,332,550,343,562,353,564,361,570,366,569,374,565,375,561,385,550,385,553,378,488,379,489,331,481,324,484,319,477,314,475,310,473,303,497,303" alt="Missouri" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="464,235,465,242,466,244,463,250,470,267,470,274,473,275,473,279,473,286,476,291,529,290,534,294,540,289,543,278,540,274,540,273,546,273,550,269,552,264,552,259,543,248,540,247,537,243,539,240,536,234" alt="Iowa" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="555,256,595,253,595,258,601,267,603,314,605,321,604,325,600,332,599,341,599,343,598,345,594,348,594,354,589,354,586,352,583,357,579,357,575,351,576,347,573,342,569,342,562,335,565,326,565,322,560,324,557,316,546,307,545,296,546,291,551,289,552,284,550,280,552,274,556,275,559,272,561,269,561,266" alt="Illinois" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="650,242,622,245,617,249,612,245,615,296,616,300,611,311,611,320,618,320,620,318,625,320,628,316,631,319,635,313,641,316,643,309,649,303,649,301,651,300,657,298" alt="Indiana" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="181,94,112,76,110,81,104,84,108,88,108,92,96,87,88,80,85,86,84,90,86,94,85,106,83,119,87,123,95,127,96,137,101,141,111,141,117,144,145,144,170,150,171,137" alt="Washington" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="76,136,92,141,91,150,97,153,105,152,110,155,139,156,161,162,166,170,158,183,152,189,155,196,145,235,50,210,50,198,52,196,50,192,56,185,62,177" alt="Oregon" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="185,112,199,114,196,133,198,139,198,144,208,159,211,159,209,167,206,179,211,177,214,180,217,194,220,195,221,201,236,202,240,199,245,205,237,252,157,237,164,202,167,199,167,197,164,195,164,190,170,184,178,173,178,171,174,167,174,163" alt="Idaho" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="42,567,63,545,90,548,152,572,213,598,246,618,288,659,304,680,261,714,44,573" alt="Hawaii" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="706,687,712,686,714,684,720,685,720,688,733,700,735,696,741,686,748,689,749,691,754,694,754,696,760,699,779,719,786,722,796,725,799,738,796,746,787,746,786,751,782,750,779,753,772,746,768,746,766,742,767,739,764,741,751,728,747,728,747,723,740,716,740,713,736,711,715,700,702,697,698,696,691,696,682,701,680,698,681,696,677,694,671,695,665,697,662,703,651,702,651,706,647,706,634,715,633,735,621,745,617,748,607,755,576,767,496,780,432,773,409,771,397,764,362,728,356,715,367,718,403,753,457,768,493,770,527,761,537,756,546,755,547,750,554,750,558,746,563,745,569,745,582,736,590,728,593,718,589,717,585,720,581,718,581,715,577,716,567,717,560,713,563,708,562,702,565,699,564,697,561,695,559,697,553,697,549,690,545,690,539,694,530,686,529,681,544,681,547,680,547,678,544,677,543,674,542,669,542,665,544,664,544,660,548,659,554,654,558,648,560,645,567,650,568,648,569,643,574,643,577,646,579,646,579,640,576,634,572,638,566,635,558,634,549,630,548,623,546,618,542,613,546,608,549,608,557,605,572,604,570,593,558,580,561,575,563,570,566,570,567,571,574,571,578,566,580,559,587,555,594,553,601,548,605,548,608,548,614,542,624,549,634,550,636,554,636,556,641,553,647,554,653,555,660,558,665,560,668,559,674,557,687,563" alt="Alaska" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="648,490,692,486,694,491,734,489,733,485,737,482,740,483,746,484,749,496,758,512,767,522,767,528,778,547,781,570,779,573,781,574,780,578,772,588,764,592,751,597,748,596,749,592,754,594,757,590,767,588,774,583,763,585,761,580,760,576,757,573,750,573,748,565,744,565,741,562,740,556,730,546,728,539,728,532,729,532,729,526,727,524,727,519,722,519,710,505,704,505,702,509,692,516,688,514,685,514,683,508,674,504,668,503,656,506,652,506,652,500,650,496" alt="Florida" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="882,59,888,59,889,63,896,58,904,61,911,84,916,86,918,91,922,93,927,98,919,110,914,118,908,121,906,123,897,129,894,131,887,143,882,140,880,139,871,103,874,99,877,94,876,87" alt="Maine" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="866,109,877,144,881,148,881,154,878,155,875,159,857,163,855,159,855,145,855,142,856,141,856,131,859,129,860,127,861,126,861,124,859,124,860,112" alt="New Hampshire" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="853,112,856,123,851,129,851,154,852,159,839,160,836,146,833,146,831,135,833,132,831,118" alt="Vermont" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="849,170,875,165,879,160,884,162,887,164,885,170,884,171,888,172,892,178,894,177,892,173,893,170,901,178,901,187,889,191,877,181,850,186" alt="Massachusetts" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="866,188,873,184,881,194,874,202,869,202" alt="Rhode Island" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="872,204,875,220,861,226,851,233,848,229,850,226,848,210" alt="Connecticut" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="842,261,854,260,854,254,852,250,849,249,843,239,844,235,842,233,836,237,840,251" alt="Delaware" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="813,205,829,210,826,219,830,221,830,236,828,241,824,249,822,252,819,251,819,247,810,244,808,239,810,234,817,229,809,221" alt="New Jersey" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="751,204,807,192,812,195,815,200,830,205,831,213,837,212,852,204,860,197,860,194,851,194,848,199,843,199,840,203,838,202,838,199,840,198,837,196,836,170,833,157,828,150,827,146,829,146,829,143,826,139,825,130,802,135,793,149,787,155,787,161,792,164,786,170,780,171,778,171,766,171,756,177,759,185,758,187,752,195" alt="New York" href="#mapanchor"/>
                  <area shape="poly" class="community_map_area" coords="780,262,781,276,786,273,788,270,791,269,791,267,795,268,799,265,802,264,806,268,808,268,808,271,815,274,814,282,830,287,832,283,835,289,847,284,848,273,838,274,832,253" alt="Maryland" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="655,227,676,223,680,226,683,223,687,226,689,228,691,228,693,225,697,225,714,213,718,239,717,258,707,268,707,274,702,276,701,284,696,285,690,282,689,281,685,282,678,283,675,281,670,281,668,277,661,276" alt="Ohio" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="724,214,735,205,737,211,793,200,798,203,801,209,805,209,805,212,802,218,801,224,810,232,802,242,798,243,798,245,731,257" alt="Pennsylvania" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="714,397,717,391,727,386,750,384,754,388,770,386,788,401,782,410,781,417,760,440,755,441,753,439,753,436,750,433,747,432,747,428,744,425,741,424,738,420,738,418,735,416,734,416" alt="South Carolina" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="733,346,766,342,816,332,825,346,826,357,821,361,816,368,814,372,809,371,806,372,799,379,798,384,798,389,794,389,792,388,789,388,786,391,768,377,750,379,749,375,731,375,719,381,699,383,698,375,702,373,707,368,710,368,716,363,717,360,722,357,725,357,727,354,730,354,731,351,733,350" alt="North Carolina" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="706,343,706,340,711,337,717,333,729,320,731,320,733,324,734,325,735,324,737,323,741,322,750,318,750,312,754,308,756,301,757,296,759,296,762,298,764,290,771,285,772,277,779,281,781,279,787,279,788,282,795,286,795,290,792,293,796,293,796,296,808,300,822,294,817,315,815,317,820,325,778,334,742,339" alt="Virginia" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="701,303,701,296,705,295,707,292,705,288,708,284,710,284,712,278,715,275,718,275,721,271,722,256,721,254,723,252,726,252,727,257,729,268,743,265,744,272,751,267,760,263,767,268,766,276,760,273,756,281,752,286,749,292,743,292,741,300,739,305,738,311,727,316,718,319" alt="West Virginia" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="598,358,600,354,603,353,604,345,608,341,612,344,614,339,618,337,618,333,621,329,625,327,631,328,637,326,639,327,643,321,647,325,648,321,653,317,653,311,660,310,662,303,669,303,673,307,680,308,685,309,689,306,694,310,696,312,698,318,701,324,708,327,698,338,685,350,635,354,625,355,622,358" alt="Kentucky" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="578,401,578,397,581,395,580,392,580,389,582,388,583,384,586,384,588,370,609,369,609,366,652,363,702,356,702,365,698,365,698,369,693,368,691,372,687,372,679,381,674,381,670,387,668,388,668,393" alt="Tennessee" href="#mapanchor"/>
                  <area shape="poly" class="community_map_area" coords="569,406,568,410,566,411,566,419,564,419,561,422,559,425,558,430,556,432,556,438,558,439,559,464,554,471,553,483,581,482,581,488,587,496,590,494,591,492,594,495,597,495,597,494,606,494,606,481,604,467,604,406" alt="Mississippi" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="615,405,618,410,617,467,619,490,622,494,633,493,638,490,639,483,634,479,647,479,674,476,673,471,672,468,672,462,671,458,672,453,673,451,672,449,668,442,664,428,658,403" alt="Alabama" href="#mapanchor"  />
                  <area shape="poly" class="community_map_area" coords="666,401,706,397,706,399,703,403,705,404,710,406,717,416,720,416,728,423,734,430,743,444,747,445,747,448,744,452,743,458,741,463,740,472,734,472,733,473,733,479,728,480,727,477,687,479,685,479,681,469,681,463,678,460,680,456,680,450,680,446,677,443" alt="Georgia" href="#mapanchor" />
                  <area shape="poly" class="community_map_area" coords="798,280,801,275,805,279,804,284" alt="District of Columbia" href="#mapanchor" />
          
                  </map>
          
                  <form action="#" method="post" onsubmit="return false;">
          
                  Or select state with this pull-down: <select id="communitymapstateselect">
          
                  <option value=""></option>
                  <option value="Alabama">Alabama</option>
                  <option value="Alaska">Alaska</option>
                  <option value="Arizona">Arizona</option>
                  <option value="Arkansas">Arkansas</option>
                  <option value="California">California</option>
                  <option value="Colorado">Colorado</option>
                  <option value="Connecticut">Connecticut</option>
                  <option value="Delaware">Delaware</option>
                  <option value="District of Columbia">District of Columbia</option>
                  <option value="Florida">Florida</option>
                  <option value="Georgia">Georgia</option>
                  <option value="Hawaii">Hawaii</option>
                  <option value="Idaho">Idaho</option>
                  <option value="Illinois">Illinois</option>
                  <option value="Indiana">Indiana</option>
                  <option value="Iowa">Iowa</option>
                  <option value="Kansas">Kansas</option>
                  <option value="Kentucky">Kentucky</option>
                  <option value="Louisiana">Louisiana</option>
                  <option value="Maine">Maine</option>
                  <option value="Maryland">Maryland</option>
                  <option value="Massachusetts">Massachusetts</option>
                  <option value="Michigan">Michigan</option>
                  <option value="Minnesota">Minnesota</option>
                  <option value="Mississippi">Mississippi</option>
                  <option value="Missouri">Missouri</option>
                  <option value="Montana">Montana</option>
                  <option value="Nebraska">Nebraska</option>
                  <option value="Nevada">Nevada</option>
                  <option value="New Hampshire">New Hampshire</option>
                  <option value="New Jersey">New Jersey</option>
                  <option value="New Mexico">New Mexico</option>
                  <option value="New York">New York</option>
                  <option value="North Carolina">North Carolina</option>
                  <option value="North Dakota">North Dakota</option>
                  <option value="Ohio">Ohio</option>
                  <option value="Oklahoma">Oklahoma</option>
                  <option value="Oregon">Oregon</option>
                  <option value="Pennsylvania">Pennsylvania</option>
                  <option value="Rhode Island">Rhode Island</option>
                  <option value="South Carolina">South Carolina</option>
                  <option value="South Dakota">South Dakota</option>
                  <option value="Tennessee">Tennessee</option>
                  <option value="Texas">Texas</option>
                  <option value="Utah">Utah</option>
                  <option value="Vermont">Vermont</option>
                  <option value="Virginia">Virginia</option>
                  <option value="Washington">Washington</option>
                  <option value="West Virginia">West Virginia</option>
                  <option value="Wisconsin">Wisconsin</option>
                  <option value="Wyoming">Wyoming</option>
          
                  </select>
          
                  </form>
          
                  <a name="mapanchor" id="mapanchor" />
                  <div id="communitymapstatelistdiv" style="display: none;">
                  <h3>State Group</h3>
                  <ul id="communitymapstatelist">
          
                  </ul>
          
                  </div>
          
          
                  <div id="communitymapdistrictlistdiv" style="display: none;">
                  <h3>Region Groups</h3>
          
          
                  </div>
          
          
                  <div id="communitymapcountylistdiv" style="display: none;">
                  <h3>County Groups</h3>
          
          
                  </div>
                  ',
    'log' => '',
    'format' => '4',
    'name' => '',
    'path' => 'community',
    'og_groups_both' => array(),
    'og_groups' => array(),
    'signup' => 0,
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'uuid' => 'fa2f83a9-9446-11e0-88ba-e0e2cd5d67f0',
    'pathauto_perform_alias' => FALSE,
  );
  return $nodes;
}
