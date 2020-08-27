//주제: 값으로서의 함수와 콜백


function cal(func, num){
    return func(num)
}

function increase(num){
    return num + 1
}

function decrease(num){
    return num - 1
}



alert(cal(increase, 1));
alert(cal(decrease, 1));



//함수는 함수의 리턴 값으로도 사용할 수 있다.

function cal(mode){
    var func = {
        'plus' : function(left, right) {return left + right},
        'minus' : function(left, right) {return left - right}
    }

    return func[mode];
}

alert(cal('plus')(2, 1));
alert(cal('minus')(2, 1));

//배열의 값으로도 사용할 수 있다.price-item

var process = [
    function (input) {return input + 10},
    function (input) {return input * input},
    function (input) {return input / 2}
];

var input = 1;

for(var i = 0; i < process.length; i++)
{
    input = process[i] (input);
}

alert(input);

//callback
sortNumber = function (a, b){
    console.log(a - b);
}
var number = [20, 19, 18, 10, 1, 2, 5, 3, 4, 6, 7, 8, 11, 9];

console.log(number.sort(sortNumber));

// sortnumber 이 콜백 함수임.
// 콜백함수는 값으로서 함수를 사용할 수 있기때문에, 오리지널 함수의 동작방법을 콜백함수를 변경하면서 완전히 결과값을 바꿀 수 있다.