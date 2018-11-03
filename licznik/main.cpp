#include <iostream>

using namespace std;
int main()
{
    int liczba[ 10 ];
    int licznik = 0;
    cout<< "Podaj 10 dowolnych liczb i zatwierdz enterem"<<endl;
    do
    {
        cout <<"Liczba nr "<<licznik+1<<" to: ";
        cin >> liczba[ licznik ];
        licznik++;
    } while( licznik < 10 );

        cout << "Podales nastepujace liczby: ";
    licznik = 0;
    do
    {
        cout << liczba[ licznik ] << ", ";
        licznik++;
    } while( licznik < 10 );

    return 0;}
