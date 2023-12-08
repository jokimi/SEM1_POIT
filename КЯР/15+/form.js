document.addEventListener('DOMContentLoaded', () => {
    const inp1 = document.getElementById('input1'),
    inp2 = document.getElementById('input2'),
    inp3 = document.getElementById('input3'),
    inp4 = document.getElementById('input4'),
    inp5 = document.getElementById('input5'),
    inp6 = document.getElementById('input6'),
    inp7 = document.getElementById('input7'),
    inp8 = document.getElementById('input8'),
    div = document.getElementById('footer'),
    btn = document.getElementById('click');
    btn.addEventListener('click', function () {
        if (inp1.value.length)
        div.innerHTML += inp1.value + '<br>';
        if (inp2.value.length)
        div.innerHTML += inp2.value + '<br>';
        if (inp3.value.length)
        div.innerHTML += inp3.value + '<br>';
        if (inp4.value.length)
        div.innerHTML += inp4.value + '<br>';
        if (inp5.value.length)
        div.innerHTML += inp5.value + '<br>';
        if (inp6.value.length)
        div.innerHTML += inp6.value + '<br>';
        if (inp7.value.length)
        div.innerHTML += inp7.value + '<br>';
        if (inp8.value.length)
        div.innerHTML += inp8.value;
    });
});