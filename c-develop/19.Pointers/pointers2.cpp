// ini contoh pointers di bahasa C++ 
#include <iostream>
using namespace std;

int main(){
    
     string makanan = "Ayam Taliwang";  // variable makanan tipe string
string* food = &makanan;    // A pointer variable, with the name food, that stores the address of makanan

// Output the value of makanan (Ayam Taliwang)
cout << makanan << "\n";

// Output the memory address of makanan (0x7ffe62dab3b0)
cout << &makanan << "\n";

// Output the memory address of makanan with the pointer (0x7ffe62dab3b0)
cout << food << "\n";
}