//for.cpp
//for example the for loop 
#include <iostream> //C++ Input / output streams
using namespace std;

int main(){
    double a, x_old, x_new;

    cout << "enter const, (0<a<=4) && initial (0<x<1) Values: ";
    cin >> a >> x_old;
    cout << endl << x_old << endl;

    for (int i = 0; i < 5; i++) {
        x_new = a * x_old * (1.0-x_old);
        x_old = x_new;
        cout << x_new << endl;
    }
}
//input 2.65 0.8
//output 
//0.8 
//0.424
//0.647194
//0.605085
//0.633236
//0.615457