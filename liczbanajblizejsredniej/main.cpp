#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d, e, m, srednia;
    cout << "Podaj 5 dowolnych liczb rozdzielonych spacj¥ i zatwierd« enterem ";
    cin>>a>>b>>c>>d>>e;
    srednia=(a+b+c+d+e)/5;
    m=fabs(srednia-a); // m to tak naprawde odleglosc (na osi liczbowej) liczby od sredniej, im mniejsza, tym liczba jest jej blizej
    if (fabs(srednia-b)<m) m=b;
    if (fabs(srednia-c)<m) m=c;
    if (fabs(srednia-d)<m) m=d;
    if (fabs(srednia-e)<m) m=e;

    cout << "—rednia wynosi: "<<srednia<<endl;
    cout << "Liczba najbli¾ej ˜redniej to "<<m;

    return 0;
}
