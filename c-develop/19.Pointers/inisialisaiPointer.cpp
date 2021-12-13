//inisialisasi sebuah pointer
#include <iostream>
using namespace std;

int main()
{
    int varOne;
    int *varOne = &varOne;

    int varTwo;
    int *varTwo;
    varTwo = &varTwo;

    int varThree;
    int *varThree;
    *varThree = &varThree;

    int varFour;
    int *varFoo = &varFour;
    int *varBar = varFoo;
}