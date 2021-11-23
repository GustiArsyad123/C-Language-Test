#include <iostream>
using namespace std;

//variable global
// string nama;
// int umur;
// char jenisKelamin;

//ini function jurusanPsikologi
void jurusanPsikologi()
{
    string nama;
    nama = "ini psikologi";
    cout << nama << endl;
}

//ini function jurusanFEB
void jurusanFEB()
{
    string nama;
    nama = "ini FEB";
    cout << nama << endl;
}

//fungsi utama main
int main()
{
    jurusanFEB();
    jurusanPsikologi();
}