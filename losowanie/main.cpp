#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int liczba, strzal, ile_prob=0;
int main()
{
    cout << "Witaj w programie! Pomyslalem sobie liczbe z zakresu od 1 do 100" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        ile_prob++;
        cout<< "Zgadnij jaka"<<endl;
        cin>> strzal;

        if (strzal==liczba)
            cout<< "Udalo sie, wygrywasz!(to Twoja "<<ile_prob<<". proba:)"<<endl;

        else if (strzal<liczba)
            cout<< "To za malo!(to Twoja "<<ile_prob<<". proba)" <<endl;

        else if (strzal>liczba)
            cout<< "Nieco Cie ponioslo, sprobuj jeszcze raz!(to Twoja "<<ile_prob<<". proba)"<<endl;
    }
    system("pause");
    return 0;
}
