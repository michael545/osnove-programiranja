#include <iostream>
#include <cstring>
#include <stdio.h>

bool check_string(char* s){
    bool so_4 = false;
    int counter = 1; 
    for(int i =0; s[i] != 0; i++){
        if(s[i] == s[i+1]){
            counter ++; 
        }else{
            counter =1; 
        }
        if(counter == 4){
            so_4 = true;
        }
    }
    return so_4; 
}

using namespace std;
int main()
{
    cout<<check_string("ssss")<<endl;
return 0;
}
