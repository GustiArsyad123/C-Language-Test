#include <iostream>
using namespace std;

int main()
{
    // increment dan decrement
    // preincrement dan postincrement

    int x = 3;
    int y = 3;

    // postincrement
    cout << x << endl;
    cout << x++ << endl;
    cout << x << endl
         << endl;

    // preincrement
    cout << y << endl;
    cout << ++y << endl;
    cout << y << endl;

    cout << "===" << endl;
    // postdecrement
    cout << x << endl;
    cout << x-- << endl;
    cout << x << endl
         << endl;

    // predecrement
    cout << y << endl;
    cout << --y << endl;
    cout << y << endl;

    return 0;
}
