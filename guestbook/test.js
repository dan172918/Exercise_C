var mysql = require('mysql');
var http = require("http");
var express = require("express");
var app = express();

var cors = require('cors')

app.use(cors()) // Use this after the variable declaration
var con = mysql.createConnection(
    {
        host: "localhost",
        user: "root",
        password : "daniel918172",
        database: "my_db"
    }
)

app.post('/123asd', function(req, res)
{
    var getData = 'select * from test1';
    con.query(getData, function(err, result)
    {
        if(err)throw err;
        res.send(result);
    })
})

app.listen(3000, function() {
    console.log("Guestbook app started on port 3000.");
  });