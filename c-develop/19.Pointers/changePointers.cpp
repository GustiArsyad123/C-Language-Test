// ini contoh pointers di bahasa C++ 
#include <iostream>
using namespace std;

int main(){
    string makanan = "Ayam Taliwang"; //variable dengan tipe string 
    string* food = &makanan; // deklarasi pointer
    cout << food << endl; //hasil keluaran makanan "0x7ffe0d903030" 
    cout << &food << endl; //alamat memory keluaran dari makanan "Ayam Taliwang" 
    cout << *food << "\n"; // "cetak ayam taliwang"
    *food = "Bakso";  //ubah nama variable
    cout << *food << endl; //cetak Bakso
    cout << food << endl; //cetak "0x7ffe0d903030" 
}


