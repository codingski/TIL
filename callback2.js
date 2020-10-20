class UserStorage {
    loginUser(id, password, onSuccess, onError){
        setTimeout(function(){
            if(
                (id === 'ellie' && password === 'dream') ||
                (id === 'coder' && password === 'academy')
            ){
                return onSuccess(id);
            }else{
                return onError(new Error('not found'))
            }
        }, 2000);
    }

    getRoles(user, onSuccess, onError){
        setTimeout(function(){
            if(user === 'ellie'){
                return onSuccess({name: 'ellie', role: 'admin'});
            }else{
                return onError(new Error('not found'));
            }
        }, 2000)
    }

    getRoles(user, onSuccess, onError){}
}

const userStorage = new UserStorage();
const id = prompt('enter your id');
const password = prompt('enter yout password');
userStorage.loginUser(
    id,
    password,
    function(user){
        userStorage.getRoles(user,
            function(userWithRole){
                return alert(`Hello ${userWithRole.name}, you have a ${userWithRole.role} role`)
        },
        function(error){return console.log(error)})
    },
    function(error){return console.log(error)})
