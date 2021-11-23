#include <iostream>  //import input output
using namespace std; //so that function cout, cin and other can be read

int main()
{

    // assignment
    int x = 5;

    cout << "The first value from x is: " << x << endl;

    // assignment operator
    // variabel = variabel operator expression
    //     x.   =.   x.      -       2
    // variabel operator= ekspresi
    //     x.      +=.       2

    x += 2;
    cout << "Addition 2 become " << x << endl;

    x -= 2;
    cout << "Subtitution 2 become " << x << endl;

    x /= 2;
    cout << "Distribution 2 become " << x << endl;

    x *= 2;
    cout << "Multiplication 2 become " << x << endl;

    x %= 3;
    cout << "Mudulus 2 become " << x << endl;

    return 0;
}