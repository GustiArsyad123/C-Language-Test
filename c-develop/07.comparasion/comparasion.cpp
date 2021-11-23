#include <iostream>  //import input output
using namespace std; //so that function cout, cin and other can be read

int main()
{
    int a = 3;
    int b = 3;

    bool result1, result2, result3, result4, result5, result6;

    // komparasi, relation expression

    // comparable ==
    result1 = (a == b);
    // incomparable !=
    result2 = (a != b);

    // less than
    result3 = (a < b);
    // more than
    result4 = (a > b);

    // less than equal to
    result5 = (a <= b);
    // more than equal to
    result6 = (a >= b);

    cout << "comparasion 1" << endl;
    cout << result1 << endl;
    cout << result2 << endl;

    cout << "comparasion 2" << endl;
    cout << result3 << endl;
    cout << result4 << endl;

    cout << "comparasion 3" << endl;
    cout << result5 << endl;
    cout << result6 << endl;

    return 0;
}