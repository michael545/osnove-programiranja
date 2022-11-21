

function stDeljiteljev(stevilo) {
    let j = 0;
    for (i = 1; i < stevilo; i++) {
      if (stevilo % i == 0) {
        j++;
      }
    }
    return j;
  }
  var tabela = [11, 34, 987, 37, 2, 56, 23, 25, 24];
  for(let i2 =0; i2<tabela.length;i2++){
      for(x = 0; x < (tabela.length -1); x++){
          if(stDeljiteljev(tabela[x]) > stDeljiteljev(tabela[x+1])){
          shramba_tmp = tabela[x];
          tabela[x] = tabela[x+1];
          tabela[x+1] = shramba_tmp;
          // console.log(tabela);
          }
          if(stDeljiteljev(tabela[x]) == stDeljiteljev(tabela[x+1])){
              if(tabela[x] > tabela[x+1]){
                  var tmp = tabela[x];
                  tabela[x] = tabela[x+1];
                  tabela[x+1] = tmp;
              }
          }
             
      }
  }
  console.log(tabela);
  
  