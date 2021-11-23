//operasi seleksi
#include <iostream>
using namespace std;

int main(){
    int number; //tipe data integer artinya di bilangan bulat
    cout << "Inputkan [1,2,3,100]: "; 
    cin >> number; //berikan inputan
    switch(number){
        case 1: 
        cout << "you are choice number 1" "\n";
        break;
        case 2: 
        cout << "you are choice number 2" "\n";
        break;
        case 3: 
        cout << "you are choice number 3" "\n";
        break;
        //case 100: 
        //cout << "you are choice number 100" "\n";
        //break;
        default: 
        cout << "you are choice default" "\n";
        break;
    }
    return 0;
}