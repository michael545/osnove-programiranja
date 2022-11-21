var numbers = [1,1,1,2,2,3,3,3,3];
var i = 0;
var modus; 
var frekvenca = 1;
var frekvenca_prejsnja;
//console.log(numbers.length);
while(i < numbers.length){
    if(numbers[i] == numbers[i+1]){
        frekvenca ++;
        if(frekvenca > frekvenca_prejsnja){
            modus = numbers[i];
        }
           
    }else{
        frekvenca_prejsnja = frekvenca;
        frekvenca = 1;
    }

    i++;
}

console.log(modus);