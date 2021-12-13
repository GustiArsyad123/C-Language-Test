// pointer to string literal
#include <iostream>
using namespace std;

int main()
{

    // ilustrasi index 0=h, 1=e, 2=l, 3=l, 4=0
    const char *testing = "hello";

    cout << *testing << endl; // print h

    cout << *(testing + 1) << "\n"; //print e
    cout << testing[2] << "\n";     // print l
}