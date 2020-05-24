#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cmath>
using namespace std;

int pascal_(int a, int b)
{
    if (b == 0 || b == a)
        return 1;
    else
        return pascal_(a - 1, b - 1) + pascal_(a - 1, b);
}

int main()
{
    HANDLE kolorki;
    kolorki = GetStdHandle(STD_OUTPUT_HANDLE);
    //Trojkat paskala dla p = 5
    for (int i = 0; i <= 5; i++)
    {
        if(i%2==0)
            SetConsoleTextAttribute(kolorki, 14);
        else
            SetConsoleTextAttribute(kolorki, 12);
        cout<< setw(2 * (5 - i))<<"";
        for (int j = 0; j <= i; j++)
            cout<< pascal_(i, j) << setw(4) ;
        SetConsoleTextAttribute(kolorki, 15);
        cout<<setw(20-(i*2))<<"Suma = "<<pow(2,i) << endl<< endl;

    }
    return 0;
}
