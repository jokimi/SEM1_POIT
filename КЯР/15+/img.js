window.onload = function() {
    var a = document.querySelector("#hover");
    a.onmouseout = function(e) {
        document.getElementById("desc").style.display='none';
    }
    a.onmouseover = function(e) {
        document.getElementById("desc").style.display='flex';
    };
}
var b = document.getElementById("border");
b.addEventListener('click', clicker);
function clicker() {
    document.getElementById("bor").style.border='10px solid red';
};
change.onmouseover = function() {
    this.src = 'images/5.jpg';
}
change.onmouseout = function() {
    this.src = 'images/4.jpg';
}