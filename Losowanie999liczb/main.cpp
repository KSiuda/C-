#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    double liczba[998];
    int wynik;


    srand(time(NULL));

   for (int i=0; i<999; i++)
   {
       liczba[i]=rand()%7+4 ;
       cout << "Liczba nr "<<i+1<<" to: "<<liczba[i]<<endl;
   }

    wynik=0;
    for (int i=0; i<999; i++)
    {

        wynik += liczba[i];

    }
    cout <<endl<<" Suma wszystkich wylosowanych liczb to :"<<wynik<<endl<<endl;
    cout <<"By zakonczyc program, wcisnij dowolny klawisz";

    getch();


    return 0;
}
