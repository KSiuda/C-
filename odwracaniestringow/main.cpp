#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wyraz;
    cout << "Podaj wyraz do odwrocenia"<<endl;
    getline(cin,wyraz);

    int dlugosc=wyraz.size();
    for (int i=dlugosc-1; i>=0; i--)
    {
    cout << wyraz[i];
    }
    return 0;

}
