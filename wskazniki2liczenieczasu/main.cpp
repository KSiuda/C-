#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int ile;
clock_t start, stop;
double czas;
int main()
{
    cout << "Podaj ile miejsc w tablicy: ";
    cin >> ile;
    cout << endl;

   int*tablica;
   tablica = new int [ile];

   start=clock();

   for(int i=0;i<ile;i++)
   {
       tablica[i]=i;
       tablica[i]+=50;
   }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout <<"Czas zapisu (bez wskaznika): "<<czas<<endl;

    int*wskaznik=tablica;
    tablica = new int[ile];

    start=clock();

    for(int i=0;i<ile;i++)
    {
      *wskaznik=i;
      *wskaznik+=50;
      wskaznik++;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout <<"Czas zapisu (ze wskaznikiem): "<<czas<<endl;


   delete [] tablica;
    return 0;
}
