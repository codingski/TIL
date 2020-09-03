function sum()
{
    var i, sum_ = 0;
    for(i = 0; i < arguments.length; i++)
    {
        document.write(i + ":" + arguments[i] + '<br/>');
        sum_ += arguments[i];
    }
    return sum_;
}

document.write("result: " + sum(1,2,3,4));

/*
arguments 는 자바스크립트와 약속되어있는 특수한 이름의 변수명이다.
이 변수안에는 유사배열이 담겨져있음.
arguments 안에는 사용자가 전달한 인자가 들어가있다.
그래서 이 객체를 통해서 사용자가 전달한 인자들에 접근할 수 있는 기능을 제공하는것을 arguments라고함. 
고로 저 함수의 arguments.length == 4

정리하자면 arguments 는 파라미터(인자)들을 배열의 형태로 저장해놓은 변수이다.
*/