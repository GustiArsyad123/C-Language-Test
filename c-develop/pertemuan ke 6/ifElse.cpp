#include <iostream>
using namespace std ;

int main() {
    int number ;

    cout << " Input [1/2/3] : ";
    cin >> number;
    if (number <= 0){
        cout << "kurang dari 1"<<endl;
    }else if(number == 1){
        cout << "nilainya 1"<<endl;
    }else if(number != 2){
        cout << "nilainya 2"<<endl;
    }else if(number == 3){
        cout << "nilainya 3"<<endl;
    }else if(number == 4){
        cout << "angaka 4"<<endl;
    } else {
        cout << "nambah lagi"<<endl;
    }
    return 0 ;
}