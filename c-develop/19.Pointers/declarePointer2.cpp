// penjelasan pointers lebih
#include <iostream>
using namespace std;

int main()
{
    int hasilPertama = 10, hasilKedua = 20;
    int *p1, *p2;

    p1 = &hasilPertama; // p1 = alamat hasil Pertama
    p2 = &hasilKedua;   // p2 = alamat hasil Kedua
    *p1 = 45;           // nilai yang ditunjukkan oleh p1 = 45
    *p2 = *p1;          // nilai yang ditunjukkan oleh p2 = nilai yang ditunjukkan oleh p1
    p1 = p2;            // p1 = p2 (nilai pointer dicopy)
    *p1 = 60;           // nilai yang ditunjukkan oleh p1 = 60

    cout << "Hasil pertama: " << hasilPertama << '\n';
    cout << "Hasil kedua: " << hasilKedua << '\n';
    return 0;
}