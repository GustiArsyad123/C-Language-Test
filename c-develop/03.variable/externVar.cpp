#include <iostream>
using namespace std;

// Variable declaration:
extern int x, y;
extern int z;
extern float xyz;

int main()
{
    // Variable definition:
    int x, y;
    int z;
    float xyz;

    // actual initialization
    x = 5;
    y = 10;
    z = x + y;

    cout << z << endl;

    xyz = 70.0 / 3.0;
    cout << xyz << endl;

    return 0;
}