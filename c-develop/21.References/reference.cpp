#include <iostream>
using namespace std;

int main()
{
    string makanan = "Ayam Taliwang"; // variable makanan
    string &food = makanan;           // refence to makanan
    cout << makanan << endl;
    cout << food << endl;
}

/**
 * Membuat Referensi
   Variabel referensi adalah "referensi" ke variabel yang ada, dan dibuat dengan operator &:
 *
 */