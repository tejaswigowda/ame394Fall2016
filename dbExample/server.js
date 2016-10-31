var express = require("express");
var app = express();
var bodyParser = require('body-parser');
var errorHandler = require('errorhandler');
var methodOverride = require('method-override');
var hostname = process.env.HOSTNAME || 'localhost';
var port = 8080;
var db = require('./node_modules/mongoskin').db('mongodb://user:pwd@127.0.0.1:27017/sensorData');


app.get('/addSensorData', function(req, res){
  var info = req.query;
	info.ts = new Date().getTime();
      db.collection('data').insert(info, function(err3, r3) {
        if (err3) {
          res.send("0");            
        }
         else {       
          res.send("1");
        }   
      });
});


app.get('/getData', function(req, res){
  var info = req.query;
	var start  = parseInt(info.startTime);
      db.collection('data').find({ts:{$gte:start}}).limit(20).toArray(function(err, result){
		console.log(err);
		console.log(result);
	  if(err){
		res.send("[]")
	  }
	  else{
		res.send(JSON.stringify(result));
	  }
	});




});


app.use(methodOverride());
app.use(bodyParser());
app.use(express.static(__dirname + '/public'));
app.use(errorHandler());

console.log("Simple static server listening at http://" + hostname + ":" + port);
app.listen(port);
