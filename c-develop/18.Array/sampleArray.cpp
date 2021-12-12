#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{

    int N[5]; // N adalah array dari 5 bilangan bulat

    // inisialisasi elemen array n ke 0
    for (int i = 0; i < 5; i++)
    {
        N[i] = i + 100; // atur elemen di lokasi i ke i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;

    // keluaran nilai setiap elemen array
    for (int j = 0; j < 5; j++)
    {
        cout << setw(7) << j << setw(13) << N[j] << endl;
    }

    return 0;
}

/* Output:
Element        Value
      0          100
      1          101
      2          102
      3          103
      4          104
      **/