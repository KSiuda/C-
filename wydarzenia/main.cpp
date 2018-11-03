#include <iostream>
#include "event.h"
using namespace std;

int main()
{
    Event w1("Urodziny Agaty",27,7,2017,18,15);
    w1.show();
    Event w2;
    w2.show();

    return 0;
}
