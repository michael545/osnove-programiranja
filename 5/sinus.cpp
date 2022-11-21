#include <iostream>
#include <cmath>
//#include "BigIntegerLibrary.hh"
using namespace std;

long double sinus(long double kot);
long long int factorial(long int n);
long double potenca(double osnova, int exponent);

int main()
{

    cout << sinus(0.5)<<endl;    
    return 0;
}

long long int factorial(long int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

long double potenca(double osnova, int exponent)
{
    long double prod = 1;
    for (int x = 1; x <= exponent; x++)
    {
        prod *= osnova;
    }
    return prod;
}

long double sinus(long double kot)
{
    long double sinus;
    for (int i = 0; i < 30; i++)
    {
        sinus = sinus +  (pow(kot, (2*i+1)) * pow((-1), i))/ factorial(2*i+1);
    }
    return sinus;
}