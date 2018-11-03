#include <iostream>
#include "event.h"

using namespace std;

void Event::load()
{
  cout<<"Nazwa wydarzenia: "<<endl;
  cin>>name;
  cout<<"Dzien: "<<endl;
  cin>>day;
  cout<<"Miesiac: "<<endl;
  cin>>month;
  cout<<"Rok: "<<endl;
  cin>>year;
  cout<<"Godzina: "<<endl;
  cin>>hour;
  cout<<"Minut: "<<endl;
  cin>>minute;

}

void Event::show()
{
    cout<<endl<<name<<" "<<day<<"."<<month<<"."<<year
    <<" "<<hour<<":"<<minute<<endl;
}
Event::Event(string n, int d, int m, int y, int h, int mins)
{
   name=n;
   day=d;
   month=m;
   year=y;
   hour=h;
   minute=mins;
}
Event::~Event()
{
    cout<<endl<<"To ja destruktor, siema";
}
