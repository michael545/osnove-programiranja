CHARTABLE = [ 'a', 'b', 'c', 'č', 'd',
'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm', 'n',
'o', 'p', 'r', 's', 'š',
't', 'u', 'v', 'z', 'ž','_', 0];

function indeks(crka){
    for(let j = 0; CHARTABLE[j] != 0; j++){
        if(crka == CHARTABLE[j]){
            return j;
            break;
        }
    }
}

// console.log(indeks('t'));

IMPORTANT_MESSAGE = [
    'v','n','p','b','m','e',
    'g','n','u','l','m','e',
    'f','b','p','u','k','z',
    'b','h','e','g','n','u',
    'l','k','z','b','č','j',
    'e','h', 0];

function zakodiraj(sporocilo, zamik){ 
    for(let i =0; sporocilo[i] != 0; i++){
        if(indeks(sporocilo[i]) <= (24-(zamik))){
            sporocilo[i] = CHARTABLE[indeks(sporocilo[i]) +zamik]
        }else{
            sporocilo[i] = CHARTABLE[(zamik -(24 -indeks(sporocilo[i])))-1]
        }
    }
    return sporocilo;
}
console.log(zakodiraj(IMPORTANT_MESSAGE,22))
