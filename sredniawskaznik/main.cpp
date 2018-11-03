#include <iostream>
#include <conio.h>

using namespace std;

int main()
{


    cout << "Witaj w programie liczacym srednia Twoich ocen!"<<endl;
    cout << "Podaj liczbe Twoich ocen i potwierdz enterem :";
    int ilosc;
    cin >> ilosc;
    cout<<endl;
    float *ocena=NULL;
    ocena = new float[ilosc];

    for (int i=0; i<ilosc; i++)
    {
        cout<<"Podaj Twoja ocene nr "<<i+1<<" i potwierdz jej wybor enterem."<<endl;
        cin>> ocena[i];
    }
    float suma;
    for (int i=0; i<ilosc;i++)
    {

        suma+=ocena[i];

    }
    float srednia;
    srednia=suma/ilosc;
    cout<<endl;
    cout<<"Srednia Twoich ocen wynosi: "<<srednia<<endl;
    cout<<"Aby wyjsc z programu, wcisnij dowolny klawisz";
    getch();

    return 0;
}
