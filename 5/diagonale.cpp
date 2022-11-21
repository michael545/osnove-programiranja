#include<iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string diagonala;
    //cout<<"na potezi je x"<<endl;
    char polje[6][7];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j< 7; j++){
            polje[i][j] = '.'  ;
            cout << polje[i][j];   
            if(j == 6){
                cout<<endl;
            }  
        }
    }
string diagonala1; 
for(int i=2, j=0; i<=5; i++, j++){
diagonala1 += polje[i][j];
}
    string diagonala2; 
    for(int i=1, j=0; i<=5; i++, j++){
    diagonala2 += polje[i][j];
}
string diagonala3; 
    for(int i=0, j=0; i<=5; i++, j++){
    diagonala3 += polje[i][j];
}
string diagonala4;
for(int i =0, j = 1; i<=5; i++, j++){
    diagonala4 += polje[i][j];
}
string diagonala5;
for(int i =0, j = 2; i<=4; i++, j++){
    diagonala5 += polje[i][j];
}
string diagonala6;
for(int i =0, j = 3; i<=3; i++, j++){
    diagonala6 += polje[i][j];
}
string diagonala7;
for(int i =3, j = 0; i>=0; i--, j--){
    diagonala7 += polje[i][j];
}
string diagonala8;
for(int i =4, j = 0; i>=0; i--, j--){
    diagonala8 += polje[i][j];
}
string diagonala9;
for(int i =5, j = 0; i>=0; i--, j--){
    diagonala9 += polje[i][j];
}
string diagonala10;
for(int i =5, j = 1; i>=0; i--, j--){
    diagonala10 += polje[i][j];
}
string diagonala11;
for(int i =5, j = 2; i>1; i--, j--){
    diagonala11 += polje[i][j];
}

string diagonala12;
for(int i =5, j = 3; i>2; i--, j--){
    diagonala12 += polje[i][j];
}

    return 0; 
}

// for(int stolpec = 0; stolpec <=5; stolpec++){
//         diagonala += polje[stolpec][5-stolpec]

// }
// for(int stolpec = 1; stolpec <=6; stolpec++){
//         diagonala += polje[stolpec][5-stolpec]

// }
// for(int stolpec = 2; stolpec <=6; stolpec++){
//         diagonala += polje[stolpec][5-stolpec]

// }
// for(int stolpec = 3; stolpec <=6; stolpec++){
//         diagonala += polje[stolpec][5-stolpec]

// }

// string diagonala1; 
// for(int i=2, int j=0; i<=5; i++, j++){
// string diagonala1 += polje[i][j];
// }

