var fs = require('fs'); // we require modul, var name = module name
var read = fs.readFileSync('read.txt', 'utf8');
//console.log(read);
fs.writeFileSync('write.txt', read);