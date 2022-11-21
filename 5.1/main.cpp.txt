#include <iostream>
#include <string>

using namespace std;

bool preveri_String(string str)
{
    if (str.find("xxxx") != string::npos || str.find("oooo") != string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // cout<<"na potezi je x"<<endl; // prvi na potezi je x
    cout << '0' << '1' << '2' << '3' << '4' << '5' << '6' << endl;
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

    int i = 0;
    int y = 0; // vhodni podatek za izbiro stolpca
    int i1 = 0;
    while (true) // glavna zanka
    {
        cout << " vnesite stevilko stolpca v katerega vnasate zeton med [0 in 6]" << endl;
        if (i1 % 2 == 0 || i1 == 0)
        {
            cout << "na potezi je x" << endl;
        }
        else
        {
            cout << "na potezi je o" << endl;
        }
        cin >> y;

        for (int i = 6; i >= 0; i--)
        {
            if (polje[i][y] == '.' & i1 % 2 == 0)
            {
                // cout<< "na potezi je o"<<endl;
                polje[i][y] = 'x';
                break;
            }
            else
            {
                if (polje[i][y] == '.')
                {
                    // cout<< "na potezi je x"<<endl;
                    polje[i][y] = 'o';
                    break;
                }
                if (i == 0 & polje[i][y] != '.')
                {
                    cout << "stolpec je poln, poskusite z drugim stolpcom !!!" << endl;
                }
            }
        }
        // izrisi igralno polje
        cout << '0' << '1' << '2' << '3' << '4' << '5' << '6' << endl;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                cout << polje[i][j];
                if (j == 6)
                {
                    cout << endl;
                }
            }
        }

        string vrstice = "";
        for (int i = 0, x = 0; i < 6; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                vrstice += polje[i][j];
            }
            vrstice += "0";
        }
        if (preveri_String(vrstice))
        {
            goto konec;
        }

        string stolpci = "";
        for (int i = 0, x = 0; i < 7; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                stolpci += polje[j][i];
            }
            stolpci += "0";
        }
        if (preveri_String(stolpci))
        {
            goto konec;
        }

        string diagonale = "";
        for (int i = 2, j = 0; i <= 5; i++, j++) // diagonala 1
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";

        for (int i = 1, j = 0; i <= 5; i++, j++) // diagonala 2
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 0; i <= 5; i++, j++) // diagonala 3
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 1; i <= 5; i++, j++) // diagonala 4
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 2; i <= 4; i++, j++) // diagonala 5
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 0, j = 3; i <= 3; i++, j++) // diag 5
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 3, j = 0; i >= 0; i--, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 4, j = 0; i >= 0; i--, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 0; i >= 0; i--, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 1; i >= 0; i--, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 2; i > 1; i--, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";
        for (int i = 5, j = 3; i > 2; i--, j++)
        {
            diagonale += polje[i][j];
        }
        diagonale += "0";

        if (preveri_String(diagonale))
        {
            goto konec;
        }
        cout << diagonale;
        diagonale.clear();
        i1++;
    }
konec:
    cout << "konec igre" << endl;
    if (i1 % 2 == 0)
    {
        cout << "zmagala je x" << endl;
    }
    else
    {
        cout << "zmagal je o" << endl;
    }
    return 0;
}

// bool prever_string(char str[])
// {
//     int prestej = 1;
//     bool je_stiri = false;
//     for (int i = 0; i <= strlen(str) - 1; i++)
//         if (str[i] == str[i + 1] && str[i] != '.')
//         {
//             prestej++;
//         }
//     if (prestej >= 4)
//     {
//         je_stiri = true;
//     }
//     return je_stiri;
// }
