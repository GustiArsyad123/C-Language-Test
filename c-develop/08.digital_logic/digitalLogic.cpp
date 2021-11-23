#include <iostream>  //import input output
using namespace std; //so that function cout, cin and other can be read

int main()
{
    int a = 5;
    int b = 3;

    bool result, NotResult;

    // logical operators : not, and, or
    cout << "LOGICAL OPERATORS : NOT, AND, OR" << endl;
    // and : the result true if both value are true value
    cout << "For AND \n";
    result = (a == 5) and (b == 3); // true and true (1 and 1)
    cout << result << endl;
    result = (a == 1) and (b == 2); // false and true (0 and 1)
    cout << result << endl;
    result = (a == 6) && (b == 4); // true and false (1 and 0)
    cout << result << endl;
    result = (a == 7) && (b == 8); // false and false (0 and 0)
    cout << result << endl;

    cout << "==================\n";
    // or : one of the true value then result true
    cout << "For OR \n";
    result = (a == 5) or (b == 3); // true and true
    cout << result << endl;
    result = (a == 10) or (b == 3); // false and true
    cout << result << endl;
    result = (a == 5) || (b == 2); // true and false
    cout << result << endl;
    result = (a == 7) || (b == 8); // false and false
    cout << result << endl;

    cout << "==================" << endl;
    // not
    NotResult = !(a == 5);
    cout << NotResult << endl;

    return 0;
}