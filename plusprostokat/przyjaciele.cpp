#include <iostream>
#include "przyjaciele.h"
using namespace std;

Punkt::Punkt(string n, float xx, float yy)
{
    nazwa=n;
    x=xx;
    y=yy;
}
void Punkt::wczytaj()
{
    cout<<"Podaj nazw© punktu: "<<endl;
    cin>>nazwa;
    cout<<"Podaj x: "<<endl;
    cin>>x;
    cout<<"Podaj y: "<<endl;
    cin>>y;
}
Prostokat::Prostokat(string n, float xx, float yy, float s, float w)
{
    nazwa=n;
    x=xx;
    y=yy;
    szerokosc=s;
    wysokosc=w;
}
void Prostokat::wczytaj()
{
    cout<<"Podaj nazw© prostok¥ta: ";cin>>nazwa;
    cout<<"Podaj x lewego dolnego naro¾nika: ";cin>>x;
    cout<<"Podaj y lewego dolnego naro¾nika: ";cin>>y;
    cout<<"Podaj szeroko˜†: ";cin>>szerokosc;
    cout<<"Podaj wysoko˜†: ";cin>>wysokosc;
}
