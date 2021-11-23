#include <iostream>  //import input output
using namespace std; //so that function cout, cin and other can be read

int main() //main function
{
    int a = 20;
    int b = 10;
    int result;
    // operatornya +, -, *, /, %
    // addition
    result = a + b;
    cout << a << " + " << b << " = " << result << endl;

    // subtraction
    result = a - b;
    cout << a << " - " << b << " = " << result << endl;

    // multiplication
    result = a * b;
    cout << a << " x " << b << " = " << result << endl;

    // distribution
    result = a / b;
    cout << a << " / " << b << " = " << result << endl;

    // modulus
    result = a % b;
    cout << a << " % " << b << " = " << result << endl;

    // order of execution;
    result = a + b * a;
    cout << result << endl;

    //cin.get();
    return 0;
}
