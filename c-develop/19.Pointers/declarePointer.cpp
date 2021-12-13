// deklarasi pointer
#include <iostream>
using namespace std;

int main()
{
    int hasilPertama, hasilKedua; // membuat variable
    int *myPointer;               // deklarasi pointer

    myPointer = &hasilPertama;
    *myPointer = 5;
    myPointer = &hasilKedua;
    *myPointer = 10;
    cout << "Hasil Pertama:" << hasilPertama << '\n';
    cout << "Hasil Kedua:" << hasilKedua << '\n';
    return 0;
}