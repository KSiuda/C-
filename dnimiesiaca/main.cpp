#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

int numer_miesiaca;
int main()
{
    cout << "Witaj w programie, bedacym wersja uposledzonego kalendarza" << endl<<endl;
    Sleep(2000);
    cout << "Jesli napiszesz mi, ktory jest dzisiaj numer miesiaca, to dam Ci znac ile ma on dni" <<endl<<endl;
    Sleep(3000);
    cout << "Nie wpisuj jednak nazwy miesiaca, bo jestem na to zbyt slabym programem"  <<endl<<endl;
    Sleep(3000);
    cout << "Wybacz mi, piszacy mnie programista uczy sie programowania od kilku dni..." <<endl<<endl;
    Sleep(3000);
    cout << "I jest po prostu jeszcze zbyt slaby na zaawansowane rozwiazania technologiczne" <<endl<<endl;
    Sleep(3000);
    cout << "Podaj mi wiec prosze numer miesiaca(i potwierdz enterem), a zrobie Ci male czary-mary!" <<endl<<endl;
    Sleep(3000);
    cin >>numer_miesiaca;


    switch(numer_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Ten miesiac ma 31 dni! Macz wof"<<endl;
    break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Ten miesiac ma 30dni! Macz wofer"<<endl;
    break;
    case 2:
        {
        int rok;
        cout << "Ktory mamy rok?"<<endl;
        cin  >> rok;
        if(((rok%4==0)&(rok%100!=0))||(rok%400==0))
            cout << "Ten miesiac ma 29dni!";
        else
            cout << "Ten miesiac ma 28dni!";}

        break;
        default: cout << "Niepoprawny numer ciamajdo"<<endl;}

        Sleep(3000);
        system("pause");


    return 0;
}
