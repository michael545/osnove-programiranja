#include <iostream>

int main()
{

    int tabela[7] = {1,1,0,0,1,0,0};
    int vsota = 0;
    for (int i = 0; i < 4; i++)
    {
        vsota = vsota +  tabela[i] * (i + 1);
    }
    std::cout << vsota % 9;
    return 0;
}