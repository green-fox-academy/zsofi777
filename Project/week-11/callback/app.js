
let logCall = function () { // function defined here
    console.log ('logCall was called back');
};

setTimeout(logCall, 3000); //logCall is the callback, the something else is 3 seconds

// after 3 sec -> 'logCall was called back' 

/////////////////////////////////////////////////////////////

let logCall = function () {
    console.log ('logCall was called back');
};

setTimeout(function () { // function defined here, anonym
    console.log ('the function was called back');
}, 3000);

//////////////////////////////////////////////////////

let button = document.querySelector('#item');

button.addEventListener('click', function(e) { // function defined here
    console.log('the button was clicked');
});