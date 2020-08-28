// 내부함수와 외부함수의 개념
function outter(){
    var title = 'coding everybody';
    function inner(){
        alert(title);
    }
}
inner = outter();
inner();
// 외부함수는 이미 종료되었지만 내부함수를 통해 지역변수 접근이 가능하다. - >클로저


//closure and private variable
function factory_movie(title){
    return {
        get_title : function(){
            return title;
        },
        set_title : function(_title){
            title = _title
        }
    }
}

ghost = factory_movie('Ghost in the shell');
matrix = factory_movie('Matrix');

alert(ghost.get_title());
alert(matrix.get_title());

ghost.set_title('real');

alert(ghost.get_title());
alert(matrix.get_title());
//서로 다른 객체에 영향을 미치지 않음. ghost, matrix



//클로저의 응용
var arr = [];
for(var i = 0; i < 5; i++){
    arr[i] = function(id){
        return function(){
            return id;
        }
    }(i);
}

for(var index in arr){
    console.log(arr[index]());
}

/* 결과
0
1
2
3
4
*/
