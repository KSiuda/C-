#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

long int silnia(int n);
long int silnia2(int s);
int      wyraz;
clock_t start, stop, start2, stop2;
double czas;
double czas2;

int main()
{
    int argument=1;
    int ktora;
    cout <<"Liczenie silnii rekurencyjnie"<<endl;
    cout << "Podaj silnie ktorej liczby mam wyznaczyc" << endl;
    cin>>ktora;
    cout<<"Silnia liczby "<<ktora<<" wynosi: "<<silnia(ktora)<<endl<<endl<<endl;
    cout<<"Czas (rekurencyjnie): "<<czas2<<endl<<endl;
    silnia2(argument);

    getch();

    return 0;
}



long int silnia(int n)
{start2=clock();
    if (n==0) return 1;
    else return n*silnia(n-1);
stop2=clock();
czas2=(double)(stop2-start2)/CLOCKS_PER_SEC;

}
long int silnia2(int sil=1)

{
    cout<<"Liczenie silnii iteracyjnie"<<endl;
    cout<<"Podaj silnie ktorej liczby mam obliczyc:"<<endl;
    cin>>wyraz;
    start=clock();
    for (int i=1; i<=wyraz; i++)
    {
        sil=sil*i;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<wyraz<<"!: "<<sil<<endl;
    cout<<"Czas (iteracyjnie): "<<czas<<endl<<endl;
}



