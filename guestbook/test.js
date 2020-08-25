var mysql = require('mysql');
var http = require("http");
var express = require("express");
var app = express();

/*var cors = require('cors')

app.use(cors()) // Use this after the variable declaration*/
var bodyParser = require('body-parser');
app.use(bodyParser.json());

var con = mysql.createConnection(
    {
        host: "34.105.17.84",
        user: "root",
        password : "406261688",
        database: "my_db"
    }
);
/*
app.get('/api',function(req,res){
	res.send("success");
});
*/
app.post('/123asd', function(req, res)
{
    var getData = 'select * from test1';
    con.query(getData, function(err, result)
    {
        if(err)throw err;
        res.send(result);
    })
});

app.listen(process.env.PORT || 3000, function() {
    console.log("Guestbook app started on port 3000.");
  });
