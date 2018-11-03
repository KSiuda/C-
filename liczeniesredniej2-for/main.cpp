#include <iostream>
#include <conio.h>

using namespace std;
float oceny[15];
float srednia;

int main()
{
    cout << "Witaj w programie, ktory policzy srednia z Twoich ocen" << endl;
    cout << "Podaj prosze swoich 6 ocen: "<<endl;

    for (int i=1; i<=6; i++)
    {
        cout<<endl<< "Podaj swoja "<<i<<" ocene :";
        cin>>oceny[i];
    }
    srednia=(oceny[1]+oceny[2]+oceny[3]+oceny[4]+oceny[5]+oceny[6])/6;
    cout <<"To Twoja srednia!: "<< srednia<<endl;
    cout <<"Wcisnij dowolny klawisz, by zamknac program"<<endl;

    getch();

    return 0;
}
