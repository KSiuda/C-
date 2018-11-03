#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

float x,y;
char wybor;

int main()

{


 while(true)
    {


{
    cout << "Podaj 1 liczbe" << endl;
    cin >> x;
    cout << "Podaj 2 liczbe" << endl;
    cin>> y;
    cout <<endl;
    cout <<endl;



    cout << "       MENU GLOWNE      " << endl;
    cout << "------------------------" << endl;
    cout << "   1.      DODAWANIE"     << endl;
    cout << "   2.    ODEJMOWANIE"     << endl;
    cout << "   3.       MNOZENIE"     << endl;
    cout << "   4.      DZIELENIE"     << endl;
    cout << "   5.KONIEC PROGRAMU"     << endl;


    cout <<"    WYBOR:"         <<endl;
    cout <<endl;
    cout <<endl;

    wybor=getch();




    switch(wybor)
    {
        case '1':
                 cout << "SUMA=" << x+y<<endl;
                 cout <<endl;
                 cout <<endl;
        break;

        case '2':
                 cout << "ROZNICA=" <<x-y<<endl;
                 cout <<endl;
                 cout <<endl;
        break;

        case '3':
                 cout << "ILOCZYN=" <<x*y<<endl;
                 cout <<endl;
                 cout <<endl;
        break;
        case '4':
        if(y==0) cout << "NIE DZIELIMY PRZEZ ZERO!"<<endl<<endl<<endl;

        else     cout << "ILORAZ=" <<x/y<<endl;
                 cout <<endl;
                 cout <<endl;
        break;

        case '5':
                exit(0);

        default:
                cout << "NIE MA TAKIEJ OPCJI W MENU GLOMBIE"<<endl;
                cout <<endl;
                cout <<endl;



    }
Sleep(1000);
}
    }





    return 0;
}
