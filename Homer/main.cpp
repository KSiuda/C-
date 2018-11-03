#include <iostream>
#include <windows.h>
using namespace std;

string imie;
int liczba;

int main()
{
    cout << "Podaj imie" << endl;
    cin >> imie;
    cout << "Podaj liczbe" << endl;
    cin >> liczba;

    for (int i=1;i<=liczba;i++)
        {

        cout <<i<<". "<<imie << endl;

    }
    return 0;
}
