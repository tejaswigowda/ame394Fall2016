function getXMLHTTPRequest()
{
    var request;
    
    // Lets try using ActiveX to instantiate the XMLHttpRequest object
    try{
        request = new ActiveXObject("Microsoft.XMLHTTP");
    }catch(ex1){
        try{
            request = new ActiveXObject("Msxml2.XMLHTTP");
        }catch(ex2){
            request = null;
        }
    }

    // If the previous didn't work, lets check if the browser natively support XMLHttpRequest 
    if(!request && typeof XMLHttpRequest != "undefined"){
        //The browser does, so lets instantiate the object
        request = new XMLHttpRequest();
    }

    return request;
}


function loadFile(filename, callback)
{
    var aXMLHttpRequest = getXMLHTTPRequest();
    var allData;

    if (aXMLHttpRequest)
    {
        aXMLHttpRequest.open("GET", filename, true);
        
      aXMLHttpRequest.onreadystatechange = function (aEvt) {
        if(aXMLHttpRequest.readyState == 4){
        allData = aXMLHttpRequest.responseText;
        callback(allData)
        }
      };
      
      //Lets fire off the request
        aXMLHttpRequest.send(null);
    }
    else
    {
        //Oh no, the XMLHttpRequest object couldn't be instantiated.
        alert("A problem occurred instantiating the XMLHttpRequest object.");
    }
}




var start = function(){
	loadFile("./getData?startTime=0", function(res){
	    var data = JSON.parse(res);
	    /*var graphData =  [
		['data1', 30, 200, 100, 400, 150, 250],
		['data2', 50, 20, 10, 40, 15, 25]
	      ];*/

	var graphData = [
		['Temperature'],
		['Moisture'],
		['Humidity'],
		['Light']
	]

	for (var i = 0; i < data.length; i++){
		var row = data[i];
		var t = row.t;
		var m = row.m;
		var h = row.h;
		var l = row.l;
		graphData[0].push(t);
		graphData[1].push(m);
		graphData[2].push(h);
		graphData[3].push(l);
	}

		 var chart = c3.generate({
		    bindto: '#chart',
		    data: {
		      columns: graphData
		    }
		  }); 
	})
}
