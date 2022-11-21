#include <iostream>

using namespace std;

int main(){

    int emso [12] = {2,5,0,8,0,0,3,5,0,0,4,0}; // 12 stevka je kontrolna vsota, je 4
    int kontrola = 0; 
    int x = 7;

    for(int i = 0; i < 12; i ++){


        kontrola = kontrola + x*emso[i];
        x --;
        if (x==1){
            x =7;
        }
    }
    kontrola = kontrola %11;
    kontrola = 11 - kontrola;
    cout<< kontrola <<endl;
    return 0; 
}