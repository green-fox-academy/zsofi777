var colourChanger = document.getElementById('colour-changer');
var colours = ['red', 'blue', 'green', 'yellow'];
var counter = 0;

function changeColour() {
    if (counter >= colours.length){
        counter = 0;
    }

    colourChanger.style.background = colours[counter];
    counter++;
}

var myTimer = setInterval(changeColour, 1000);

colourChanger.onclick = function () {
    clearInterval(myTimer);
    
};