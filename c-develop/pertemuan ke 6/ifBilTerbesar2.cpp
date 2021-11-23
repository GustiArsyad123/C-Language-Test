#include <iostream> //import input output
using namespace std; //mengguanakan file fungsi std

int main() //fungsi
{
    double x, y;  //deklarasi variable menggunakan tipe data double
    cout << "Masukkan x: ";  //cetak ke layar monitor x
    cin >> x;               //inputan kemudian di simpan di variable x
    cout << "Masukkan y: "; //cetak ke layar monitor Y
    cin >> y;               ////cetak ke layar monitor Y
    
    if (x > y)  {
        cout << "Bilangan terbesar adalah X" << "\n";
    } else {
    cout << "Bilangan terbesar adalah Y" << "\n";
    }
        return 0;
}