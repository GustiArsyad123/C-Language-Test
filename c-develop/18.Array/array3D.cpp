// C++ untuk program array 3D
#include <iostream>
using namespace std;

int main()
{
    // Array ini mampu menampung sampai  12x5=60 elements (5x4x3)
    int array3D[5][4][3] = {
        {{1, 2, 4},
         {3, 4, 5},
         {5, 6, 100},
         {10, 20, 200}},
        {{7, 8, 150},
         {9, 10, 30},
         {11, 12, 40},
         {40, 50, 70}},
        {{1, 2, 4},
         {3, 4, 5},
         {5, 6, 100},
         {10, 20, 200}},
        {{1, 2, 4},
         {3, 4, 5},
         {5, 6, 100},
         {10, 20, 200}},
        {{1, 2, 4},
         {3, 4, 5},
         {5, 6, 100},
         {10, 20, 2500}},
    };

    // Displaying the values with proper index.
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 4; ++y)
        {
            for (int z = 0; z < 3; ++z)
            {
                cout << "Array 3 Dimensi[" << x << "][" << y << "][" << z << "] = " << array3D[x][y][z] << endl;
            }
        }
    }

    return 0;
}