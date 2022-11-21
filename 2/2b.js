var numbers = [1, 1, 2, 3, 3, 3, 1, 1];
var i = 0;
var modus; 
var frekvenca = 1;
var frekvenca_prejsnja;
var frekvenca_tmp = 0; 
//console.log(numbers.length);
while(i < numbers.length){
    if(numbers[i] == numbers[i+1]){
        frekvenca ++;
        if(frekvenca > frekvenca_prejsnja){
            modus = numbers[i];
            frekvenca_tmp = frekvenca; 
        }
           
    }else{
        frekvenca_prejsnja = frekvenca;
        frekvenca = 1;
    }
    i++;
}
console.log("najvisja frekvenca je " + frekvenca_tmp);
i = 0; 
frekvenca = 1;
while(i < numbers.length){
    if(numbers[i] == numbers[i+1]){
        frekvenca ++;
        if(frekvenca == frekvenca_tmp){
            console.log(numbers[i]); 
        }
    }else{
        frekvenca =1;
    }
    i++;
}
