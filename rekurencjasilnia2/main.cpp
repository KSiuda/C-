#include <iostream>


using namespace std;


 int main ()
{
    int wyraz;
    int silnia=1;
    cout<<"Podaj silnie ktorej liczby mam obliczyc:";
    cin>>wyraz;

    for (int i=1; i<=wyraz; i++)
    {
        silnia=silnia*i;


    }
cout<<wyraz<<"!: "<<silnia<<endl;


    return 0;
}
