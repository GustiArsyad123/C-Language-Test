#include <iostream> //import input output
using namespace std; //mengguanakan file fungsi std

int main() //fungsi
{
    double x, y, terbesar;  //deklarasi variable menggunakan tipe data double
    cout << "Masukkan x: ";  //cetak ke layar monitor x
    cin >> x;               //inputan kemudian di simpan di variable x
    cout << "Masukkan y: "; //cetak ke layar monitor Y
    cin >> y;               ////cetak ke layar monitor Y
    // Mengasumsikan yang terbesar adalah x
    terbesar = x;
    if (terbesar < y)  {
        terbesar = y;
    }
    cout << "Bilangan terbesar = "  << terbesar << "\n";
        return 0;
}