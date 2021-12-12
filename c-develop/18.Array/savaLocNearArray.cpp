//disimpan di lokasi yang berdekatan

#include <iostream>
using namespace std;

int main()
{
    int arr[3], i;

    cout << "Ukuran integer dalam compiler ini adalah:"
         << sizeof(int) << "\n";

    for (i = 0; i < 3; i++)
        // The use of '&' before a variable name, yields
        // address of variable.
        cout << "Alamat arr[" << i << "] adalah " << &arr[i]
             << "\n";

    return 0;
}

/*
Ukuran integer dalam compiler ini adalah:4
Alamat arr[0] adalah 0x7ffccfc3e28c
Alamat arr[1] adalah 0x7ffccfc3e290
Alamat arr[2] adalah 0x7ffccfc3e294
**/
