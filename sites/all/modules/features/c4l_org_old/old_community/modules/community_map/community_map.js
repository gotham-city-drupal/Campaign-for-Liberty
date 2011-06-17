// TODO: fix semicolons
//this executes when the community page loads
jQuery(document).ready(function(){
   $('.community_map_area').click(function(e){
      doGetStateGroups(this.alt);
   }); 
   
   $('.community_map_area').hover(function(e){
      showNameDiv(this.alt, e.clientX, e.clientY);
   }, function(e){
      hideNameDiv();
   });
   
   
   $('#communitymapstateselect').change(function(e){
		doGetStateGroups(this.value);
		
		$('html,body').animate({scrollTop: $("#mapanchor").offset().top},'slow');
		
   });
   
   
});




//function to execute when the mouse starts the hovering
function showNameDiv(statename, x , y){
	
	$('#floatingnamediv h3').empty();
	$('#floatingnamediv h3').text(statename);
	
	//$('#floatingnamediv').show();
	
	image_left = $('.maphilighted').offset().left;
	image_top = $('.maphilighted').offset().top;
	
	//ol = image_left +x;
	ol = x;
	
	ot = image_top + y/2;
	
//	$('#floatingnamediv').offset({ top: y, left: x });
	//$('#floatingnamediv').css({position: 'absolute', 'z-index': 999, top: ot, left: ol, background: 'white'});
	
}


//function to execute when the mouse leaves the hovering
function hideNameDiv(){
	//$('#floatingnamediv').hide();
	//$('#floatingnamediv h3').empty();
}

function doGetStateGroups(statename) {

	//hide the divs
	$('#communitymapstatelistdiv').hide();
	$('#communitymapdistrictlistdiv').hide();
	$('#communitymapcountylistdiv').hide();
	
	
	//empty the ul
	$('#communitymapstatelist').empty();

	
	//remove the temp divs
	
	$('div[@id^="tempdiv"]').remove();
	$('div[@id^="countytempdiv"]').remove();
	

	$.getJSON('community_map/get_group_list/' + statename, doGetStateGroupsCallBack);

}



//the callback
//loops through array that is returned
//first element is an array for state group
//second element is array of district groups
// third element is array of county groups
function doGetStateGroupsCallBack(data){
	
	var redata = eval(data);
	
	var statearray = redata[0];
	var districtarray = redata[1];
	var countyarray = redata[2];
	
	var districtcount = 0;
	var countycount = 0;
	

	if(statearray.length > 0){
		$('#communitymapstatelistdiv').show();
		for(var st = 0; st < statearray.length; st++){
			var state = statearray[st];
			$('#communitymapstatelist').append('<li><a href="' + state.path + '">' + state.label + '</a></li>');
		}
	}
	
	
	//do the regions
	if(districtarray.length > 0){
		$('#communitymapdistrictlistdiv').show();
		
		$('#communitymapdistrictlistdiv').append("<div style='float: left;' id='tempdiv" + districtcount + "'></div>");
		
		$('#tempdiv' + districtcount).append("<ul id='tempul" + districtcount + "' ></ul>");
		
		var ulid = districtcount;
		
		for(var st = 0; st < districtarray.length; st++){
			var district = districtarray[st];
			
			if(st > 0 && ((st % 5) == 0) ) {
				$('#communitymapdistrictlistdiv').append("<div id='tempdiv" + st + "' style='float: left;'></div>");
				$('#tempdiv' + st).append("<ul id='tempul" + st + "' ></ul>");
				ulid = st;
			}
			$('#tempul' + ulid).append('<li><a href="' + district.path + '">' + district.label + '</a></li>');
		}
		$('#communitymapdistrictlistdiv').append("<div style='clear: both;'></div>");
	}
	
	
	
	
	//do the counties
	if(countyarray.length > 0){
		$('#communitymapcountylistdiv').show();
		
		$('#communitymapcountylistdiv').append("<div style='float: left;' id='countytempdiv" + countycount + "'></div>");
		
		$('#countytempdiv' + countycount).append("<ul id='countytempul" + countycount + "' ></ul>");
		
		var ulid = countycount;

		
		for(var st = 0; st < countyarray.length; st++){
		
			if(st > 0 && ((st % 10) == 0) ) {
				$('#communitymapcountylistdiv').append("<div id='countytempdiv" + st + "' style='float: left;'></div>");
				$('#countytempdiv' + st).append("<ul id='countytempul" + st + "' ></ul>");
				ulid = st;
			}

			var county = countyarray[st];
			$('#countytempul' + ulid).append('<li><a href="' + county.path + '">' + county.label + '</a></li>');
		}

		$('#communitymapcountylistdiv').append("<div style='clear: both;'></div>");
	}
	

}