var bodyParser = require('body-parser');

var data = [{item: 'get milk'}, {item: 'walk dog'}, {item: 'go shopping'}];
var urlencodedParser = bodyParser.urlencoded({extended:false}); //=middleware, pass to post request below


module.exports = function (app) {

    app.get('/todo', function (req, res) { //get from url
        //get data from mongodb and pass it to the view
            res.render('todo', {todos: data});
            //in case you want to use as rest API, uncomment the line bellow, an comment the line above
            //res.json(data);
        });

    app.post('/todo', urlencodedParser,function (req, res) {
        //console.log(req.body);
        //get data from the view and add it to the mongodb
            data.push(req.body);
            res.json(data);
        });

    app.delete('/todo/:item', function (req, res) {
        data = data.filter(function(todo){
            return todo.item.replace(/ /g, "-") !== req.params.item;
        });
            res.json(data);
        });
    }