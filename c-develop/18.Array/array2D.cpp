// Program C++ untuk menampilkan Array 2 Dimensi
#include <iostream>
using namespace std;

int main()
{
    // inisialisasi sebuah array, baris ada 4 dan kolom 3
    int array2D[4][3] = {{2, -5, 10},
                         {4, 0, 5},
                         {9, 1, 2},
                         {10, 4, 5}};
    // menggunakan perulangan di dalam perulangan (for)
    // akses baris pada array
    for (int i = 0; i < 4; ++i)
    {
        // akses kolom pada array
        for (int j = 0; j < 3; ++j)
        {
            cout << "Array 2D[" << i << "][" << j << "] = " << array2D[i][j] << endl;
        }
    }

    return 0;
}