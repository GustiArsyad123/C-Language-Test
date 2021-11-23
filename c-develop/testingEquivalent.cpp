#include <iostream>
using namespace std;

//main() is where program execution begins.
int main()
{
    int a, b, c, i;
    a = 3;
    b = 4;
    i = 0;

    while (i < 10)
    {
        a = b + 1;
        //cout << "ini hasil a 1:" << a << endl;
        a = a * a;
        //cout << "ini hasil a 2:" << a << endl; //5 * 5= 25
        i++;
    }
    c = a;
    cout << "ini hasil c:" << c << endl;
    cout << "ini hasil a:" << a << endl;
}