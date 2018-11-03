#include <iostream>
#include "przyjaciele.h"

using namespace std;

void sedzia(Punkt pkt,Prostokat p)
{
    if((pkt.x>=p.x)&&(pkt.x<=p.x+p.szerokosc)&&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc))
        cout<<endl<<"Punkt "<<pkt.nazwa<<" nale¾y do prostok¥ta "<<p.nazwa;
    else cout<<endl<<"Punkt "<<pkt.nazwa<<" nie nale¾y do prostok¥ta "<<p.nazwa;

}

int main()
{
    Punkt pkt1;
    pkt1.wczytaj();
    Prostokat p1;
    p1.wczytaj();
    sedzia(pkt1,p1);
    return 0;
}
