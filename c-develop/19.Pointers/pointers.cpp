// ini contoh pointers di bahasa C++ 
#include <iostream>
using namespace std;

int main(){
    string makanan = "Ayam Taliwang"; //variable dengan tipe string 

    cout << makanan << endl; //hasil keluaran makanan "Ayam Taliwang" 
    cout << &makanan << endl; //alamat memory keluaran dari makanan "0x7ffe62dab3b0" 
}