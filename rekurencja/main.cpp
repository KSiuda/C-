#include <iostream>

using namespace std;



long int f (int n)
{
   if (n==1||n==2) return 1;
    else return f(n-1)+f(n-2);
}
int main()
{
    cout <<"Podaj ktory wyraz ciagu Fibonnaciego mam wyznaczyc i zatwierdz enterem"<<endl;
    int ile;
    cin >>ile;
    cout <<"Ten wyraz wynosi: "<< f(ile) << endl;
    return 0;
}
