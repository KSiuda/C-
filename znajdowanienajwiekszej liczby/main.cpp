#include <iostream>

using namespace std;

int main()
{

    float a, b, c, m;
    cout<<"Podaj 3 liczby rozdzielone spacja i zatwierdz enterem ";
    cin>>a>>b>>c;
    m=a;
    if (b>=m) m=b;
    if (c>=m) m=c;
    cout <<"Najwieksza z podanych liczb to: "<<m<< endl;
    return 0;
}
