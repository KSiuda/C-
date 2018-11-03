#include <iostream>

using namespace std;

class samochod
{public:

    string marka, model;
    int rocznik, przebieg;

void wczytaj()
   {
    cout<<"Podaj mark© samochodu"<<endl;
    cin>>marka;
    cout<<"Podaj model samochodu"<<endl;
    cin>>model;
    cout<<"Podaj rocznik samochodu"<<endl;
    cin>>rocznik;
    cout<<"Podaj przebieg samochodu"<<endl;
    cin>>przebieg;
   }
void wypisz()
{
    cout<<marka<<" "<<model<<" "<<rocznik<<" "<<przebieg<<endl;
}
};
int main()
{
    samochod s1;
    samochod s2;
    s1.wczytaj();
    s1.wypisz();
    s2.wczytaj();
    s2.wypisz();

    return 0;
}
