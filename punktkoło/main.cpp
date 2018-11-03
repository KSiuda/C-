#include <iostream>
#include <math.h>

using namespace std;

class Punkt
{
    string nazwa;
    float x,y;

public:
    void wyswietl()
    {
        cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;
    }
    Punkt(string n="S", float a=0, float b=0)
    {
        nazwa=n;
        x=a;
        y=b;
    }
};

class Kolo :virtual public Punkt //klasa Kolo dziedziczy publicznie z klasy Punkt, wirtualnie w celu unikni|™cia niejednoznaczno+›ci
{
protected:
   float r;
   string nazwa;

public:
    void wyswietl()
    {
        cout<<"Koˆo o nazwie: "<<nazwa<<endl;
        cout<<"—rodek koˆa: "<<endl;
        Punkt::wyswietl();
        cout<<"Promieä: "<<r<<endl;
        cout<<"Pole koˆa: "<<M_PI*r*r<<endl;
    }

    Kolo(string nk="Koˆo", string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)
    {
        nazwa=nk;
        r=pr;

    }


};
class Kula :virtual public Punkt, virtual public Kolo
{
protected:
   string nazwa;
   float r;

public:
    void wyswietl()
    {
        cout<<"Kula o nazwie: "<<nazwa<<endl;
        cout<<"—rodek kuli: "<<endl;
        Punkt::wyswietl();
        cout<<"Promieä: "<<r<<endl;
        cout<<"Pole kuli: "<<4*(M_PI*r*r*r)/3<<endl;

    }

    Kula(string nk="Kula", string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np,a,b)

    {
        nazwa=nk;
        r=pr;
    }
};


int main()
{
    Kolo k1;
    k1.wyswietl();
    Kula ku1;
    ku1.wyswietl();

    return 0;
}
