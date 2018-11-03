#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
using namespace std;

unsigned long long int fib(unsigned long long int a){
    if (a<=2){return 1;}
    else{return fib(a-1)+fib(a-2);}
}
unsigned long long int potega (unsigned long long int a, int b){
    if (b==0){return 1;}
    else{return potega(a,b-1)*a;}
}
unsigned long long int silnia (unsigned long long int l){
    if (l==0){return 1;}
    else{return silnia(l-1)*l;}
}

int main()
{
    int przechowaj=-1337, przechowaj2=-1336;
    double czas=0, poprzedniczas=0;
    bool iteracja=false;
    bool sposobiteracja=false; ///zmienna przechowujaca informacje o tym, czy ostatni wynik zostal policzony iteracyjnie czy rekurencyjnie
    bool sposobiteracja2=false;
    while (true){
    system("cls");
    int wyb, a, b,w=1;
    int tab[3]={1};
    clock_t start,stop;
    cout<<"SUPERMENU V0.1"<<endl<<
    "1 - wyznacz x liczbe ciagu Fibonacciego"<<endl<<
    "2 - poteguj"<<endl<<
    "3 - silnia"<<endl;
    if (iteracja==false){
    cout<<"42 - zmien na iteracje"<<endl;
    }
    else{
    cout<<"42 - zmien na rekurencje"<<endl;
    }
    if (przechowaj!=-1337){
    cout<<"Ostatni wynik to "<<przechowaj<<" (policzony ";
        if (sposobiteracja==false){cout<<"rekurencyjnie";}
        else{cout<<"iteracyjnie";}
        cout<<") z czasem "<<czas<<" sekund"<<endl;
    }
    if ((przechowaj==przechowaj2)&&(sposobiteracja2!=sposobiteracja)){
        if (czas!=poprzedniczas){
        cout<<"Jak widzisz, sposob ";
        if (czas>poprzedniczas){
            if (iteracja==true){
                cout<<"rekurencyjny";
            }
            else{
                cout<<"iteracyjny";
            }
        }
        else if (czas<poprzedniczas){
            if (iteracja==true){
                cout<<"iteracyjny";
            }
            else{
                cout<<"rekurencyjny";
            }
        }
        cout<<" okazal sie byc w tym przypadku szybszy."<<endl;
        }
        else{
            cout<<"Jak widzisz, w tym przypadku oba sposoby zadzialaly w przyblizeniu tak samo szybko."<<endl;
        }
    }
    cin>>wyb;
    if ((wyb>0)&&(wyb<4)){
    cout<<"Podaj a: ";
    cin>>a;
    }
    if (wyb==2){
        cout<<"Podaj b: ";
        cin>>b;
    }
    przechowaj2=przechowaj;
    poprzedniczas=czas;
    switch (wyb){
        case 1:{
        if (iteracja==false){
        start=clock();
        przechowaj=fib(a);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        }
        else{
            start=clock();
            for (int i=0; i<a; i++){
                tab[2]=tab[0]+tab[1];
                tab[0]=tab[1];
                tab[1]=tab[2];
            }
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        przechowaj=tab[2];
        }
        break;
        }
        case 2:{
        if (iteracja==false){
        start=clock();
        przechowaj=potega(a,b);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        }
        else{
            start=clock();
            for (int i=b; i>0; i--){
                w*=a;
            }
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        przechowaj=w;
        }
        break;
        }
        case 3:{
        if (iteracja==false){
        start=clock();
        przechowaj=silnia(a);
        stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        }
        else{
            start=clock();
            for(int i=1; i<=a; i++){
                w*=i;
            }
                    stop=clock();
        czas=(double)(stop-start)/CLOCKS_PER_SEC;
        przechowaj=w;
        }
        break;
        }
        case 42:{
            if(iteracja==false){iteracja=true;;}
            else{iteracja=false;}
        }
    }
    if ((wyb>0)&&(wyb<4)){
    cout<<"Wynik "<<przechowaj<<" z czasem "<<czas<<" sekund"<<endl;
    sposobiteracja2=sposobiteracja;
    if (iteracja==false){sposobiteracja=false;}
    else{sposobiteracja=true;}
    getch();
    }
    }
    return 0;
}
