#include <iostream>  //import input output
using namespace std; //so that function cout, cin and other can be read

int main()
{

    int xyz;

    cout << "Input the number  = ";
    cin >> xyz;

    if (xyz == 3)
    {
        cout << "this is number 3" << endl;
    }
    else if (xyz == 5)
    {
        cout << "this is number 5" << endl;
    }
    else if (xyz == 1)
    {
        cout << "this is number 1" << endl;
    }
    else
    {
        cout << "Not number 3,5, or 1" << endl;
    }

    cout << "END Program" << endl;

    return 0;
}