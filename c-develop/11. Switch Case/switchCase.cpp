#include <iostream>  //import input output
using namespace std; //so that function cout, cin and other can be read

int main()
{
    int a; //declare a variable

    cout << "Input the number = "; //print
    cin >> a;                      //cin for input the number

    switch (a)
    {
    case 1:
        cout << "this is a = 1" << endl;
        break;
    case 2:
        cout << "this is a = 2" << endl;
        break;
    case 3:
        cout << "this is a = 3" << endl;
        break;
    case 4:
        cout << "this is a = 4" << endl;
        break;
    case 5:
        cout << "this is a = 5" << endl;
        break;
    default:
        cout << "default" << endl;
    }

    cout << "END Program" << endl;

    return 0;
}