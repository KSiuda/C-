#include <iostream>

using namespace std;
float oceny[15];

int main()
{
    cout << "Witaj w programie, ktory policzy srednia z Twoich ocen" << endl;
    cout << "Podaj prosze swoich 6 ocen: "<<endl<<"Ocena 1: ";
    cin >> oceny[0];
    cout <<"Ocena 2 :";
    cin >> oceny[1];
    cout <<"Ocena 3 :";
    cin >> oceny[2];
    cout<<"Ocena 4 :";
    cin >> oceny[3];
    cout<<"Ocena 5 :";
    cin >> oceny[4];
    cout<<"Ocena 6 :";
    cin >> oceny[5];




    cout <<"Twoja srednia z ocen to :"<< (oceny[0] + oceny[1]+ oceny[2]+ oceny[3]+ oceny[4]+ oceny[5])/6;


    return 0;
}
