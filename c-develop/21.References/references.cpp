// References
#include <iostream>
using namespace std;

int main()
{
    // declare simple variables
    int a;
    double b;

    // declare reference variables
    int &y = a;
    double &z = b;

    a = 10;
    cout << "Value of a : " << a << endl;
    cout << "Value of a reference : " << y << endl;

    b = 15.5;
    cout << "Value of b : " << b << endl;
    cout << "Value of b reference : " << z << endl;

    return 0;
}