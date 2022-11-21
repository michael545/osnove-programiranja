
#include <iostream>
#include <string>

using namespace std;


bool je_stiri(string str){
    if(str.find("xxxx") != string::npos || str.find("oooo") != string::npos){
        return true;
    }else{
        return false;
    }
}


int main()
{
    char polje[6][7];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            polje[i][j] = '.';
            cout << polje[i][j];
            if (j == 6)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
    string vrstice = "";
    for (int i = 0, x = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            vrstice += polje[i][j];
           
    }
     vrstice += "0";
    }
            string diagonale = "";
        for (int i = 2, j = 0; i <= 5; i++, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";

        for (int i = 1, j = 0; i <= 5; i++, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 0; i <= 5; i++, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 1; i <= 5; i++, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 2; i <= 4; i++, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 3; i <= 3; i++, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 3, j = 0; i >= 0; i--, j--)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 4, j = 0; i >= 0; i--, j--)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 0; i >= 0; i--, j--)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 1; i >= 0; i--, j--)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 2; i > 1; i--, j--)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 3; i > 2; i--, j--)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";

        if(je_stiri(diagonale)){
            //goto konec;

            cout<< "konec igre"<<endl;
        }


    cout<< diagonale; 
    return 0;
}
