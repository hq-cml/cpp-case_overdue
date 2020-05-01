#include <iostream>
using namespace std;

#define MKSTR( x ) #x

int oneWellNumber ()
{
    cout << MKSTR(HELLO C++) << endl;
    return 0;
}

#define concat(a, b) a ## b
int twoWellNumber()
{
    int xy = 100;
    cout << concat(x, y) << endl;
    return 0;
}