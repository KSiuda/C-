#include <iostream>

using namespace std;

int ile;
int main()
{
    cout << "Podaj ile miejsc w tablicy: ";
    cin >> ile;
    cout << endl;

   int*tablica;
   tablica = new int [ile];

   for(int i=0;i<ile;i++)
   {
       cout<<(int)tablica<<endl;
       tablica ++;
   }

   delete [] tablica;
    return 0;
}
