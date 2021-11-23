#include <iostream>  //import input output
#include <limits>    //for max
using namespace std; //so that function cout, cin and other can be read

int main()
{

    // bilangan bulat = integer
    unsigned int a = 10; // 32-bit
    long b = 11;
    short c = 12;

    // decimal number
    float d = 5.0;
    double e = 10.5;

    // character
    char f = 'z';            //character 1-bit
    wchar_t bigChart = L'Z'; //BIG teks 4 byte
    //boolean
    bool g = false; // true or false

    cout << "a:" << a << endl;
    cout << sizeof(a) << " byte" << endl;
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;
    //cin.get();
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
    cout << "d:" << d << endl;
    cout << "e:" << e << endl;
    cout << "f (chart):" << f << endl;
    cout << sizeof(f) << " byte" << endl;
    cout << "bigChart:" << bigChart << endl;
    cout << sizeof(bigChart) << " byte" << endl;

    return 0;
}