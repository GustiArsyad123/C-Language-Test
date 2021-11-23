#include <iostream>
#include <fstream>
#include <string>
#include <limits> //for max

using namespace std;

int pilihan();

int main()
{
    int choice = pilihan();

    enum option
    {
        CREATE = 1,
        READ,
        UPDATE,
        DELETE,
        FINISH
    };

    while (choice != FINISH)
    {

        switch (choice)
        {
        case CREATE:
            cout << "Menambah data mahasiswa" << endl;

            break;
        case READ:
            cout << "Tampilkan data mahasiswa" << endl;
            ;
            break;
        case UPDATE:
            cout << "Ubah data mahasiswa" << endl;

            break;
        case DELETE:
            cout << "Hapus data mahasiswa" << endl;

            break;
        default:
            cout << "Pilihan tidak ditemukan" << endl;
            break;
        }

        return 0;
    }
}

int pilihan()
{
    int input;
    system("clear");
    cout << "\nProgram CRUD data mahasiswa" << endl;
    cout << "=============================" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Tampilkan data mahasiswa" << endl;
    cout << "3. Ubah data mahasiswa" << endl;
    cout << "4. Hapus data mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "=============================" << endl;
    cout << "pilih [1-5]? : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}
