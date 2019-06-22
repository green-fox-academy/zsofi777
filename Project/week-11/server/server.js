var http = require('http');

var server = http.createServer(function(req, res){
    console.log('req was made: ' + req.url);
    res.writeHead(200, {'Content-type': 'text/plain'});
    res.end('First server :)');
});

server.listen(3000, '127.0.0.1');
console.log('listening to 3000');