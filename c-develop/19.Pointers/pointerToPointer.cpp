// Pointer to pointer
#include <iostream>
using namespace std;

int main()
{
    char x;
    char *y;
    char **z;
    x = 'a';
    y = &x;
    z = &y;

    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
    cout << "z:" << z << endl;
}

/*
x:a
y:a�����
z:0x7fffe8879888
*/