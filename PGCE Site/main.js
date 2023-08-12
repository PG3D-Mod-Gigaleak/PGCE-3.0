const express = require('express')
var fs = require('fs');
const { pathToFileURL } = require('url');
const app = express()
const port = 3000

var pageHeader = "";

app.use('/', express.static('public'))

function prep()
{
	fs.readFile("templates/replaces/pageheader.html", "utf8", function(err, data){
		pageHeader = data;
	});
}

app.get("/", function (req, res) {
	prep();
	sendfile(res, "templates/index.html");
})

function sendfile(res, path)
{
	fs.readFile(path, "utf8", function(err, data){
		var outData = data;
		outData = outData.replace("<!-- PAGE HEADER -->", pageHeader);
		res.send(outData);
	});
}

app.get("/about", function (req, res) {
	prep();
	sendfile(res, "templates/about.html");
})

app.listen(port, () => {
  console.log(`Listening on port ${port}`)
})