var express = require("express");
var app = express();
var bodyParser = require('body-parser');
var errorHandler = require('errorhandler');
var methodOverride = require('method-override');
var hostname = process.env.HOSTNAME || 'localhost';
var port = 8080;
var reading = 0;

app.get('/setReading', function(req, res){
  var info = req.query;
  reading = info.r;
  res.send("1");
});
app.get('/getReading', function(req, res){
  res.writeHead(200, {"Content-Type": "text/plain"});
  res.write(reading);
  res.end()

});

app.use(methodOverride());
app.use(bodyParser());
app.use(express.static(__dirname + '/public'));
app.use(errorHandler());

console.log("Simple static server listening at http://" + hostname + ":" + port);
app.listen(port);
