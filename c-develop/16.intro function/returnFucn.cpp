#include <iostream>
using namespace std;

int kuadrat(int a)
{
    int b;
    b = a * a;
    return b;
}

int tambah(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main(int argc, char const *argv[])
{

    int input, result, coba, test, result2;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    result = kuadrat(input);
    cout << result << endl;

    cout << "Inputkan nilai coba: ";
    cin >> coba;
    cout << "Inputkan nilai test: ";
    cin >> test;

    result2 = tambah(coba, test);
    cout << result2 << endl;

    return 0;
}