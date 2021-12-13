// pointer null and invalid
#include <iostream>
using namespace std;

int main()
{

    int *p; // pointer yang tidak diinisialisasi (variabel lokal)

    int myArray[5];
    int *q = myArray + 15; // elemen di luar batas

    int *p = 0;
    int *q = nullptr;

    int *r = NULL;
}
