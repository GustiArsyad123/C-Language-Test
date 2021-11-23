#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    
    // cout << "Masukkan sebuah bilangan bulat: ";
    // cin >> bilangan;
    // if (bilangan % 2 == 0) 
    // cout << "Bilangan genap" << "\n";
    // else
    // cout << "Bilangan ganjil" << "\n";
    // return 0;

    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;
    if (bilangan % 2 == 0) {
    cout << "Bilangan genap" << "\n";
    } else {
    cout << "Bilangan ganjil" << "\n";
    }
    return 0;
}