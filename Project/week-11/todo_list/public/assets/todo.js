$(document).ready(function(){

    $('form').on('submit', function(){ //when we have a submit event = click on submit
  
        var item = $('form input'); //grab the typed value
        var todo = {item: item.val()}; //then store in the item property on this object & add to data
  
        $.ajax({ //make ajax request to server with jqurery
          type: 'POST',
          url: '/todo', //controller post
          data: todo,
          success: function(data){
            //do something with the data via front-end framework, but not now
            location.reload();
          }
        });
  
        return false;
  
    });
  
    $('li').on('click', function(){ //li: todos
        var item = $(this).text().replace(/ /g, "-");
        $.ajax({
          type: 'DELETE', // call delete handler from controllers
          url: '/todo/' + item,
          success: function(data){
            //do something with the data via front-end framework
            location.reload();
          }
        });
    });
  
  });