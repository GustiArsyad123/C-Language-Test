//Operasi seleksi pada bahasa C++

// if(Kondisi){
//    Pernyataan1;
// }else{
//    Pernyataan;
// }

// if(Kondisi){
//    Pernyataan1;
// }else if(Kondisi2){
//    Pernyataan;
// }else{
//    Pernyataan;
// }

#include <iostream> //import Input/output
using namespace std; //declare namespace std;

int main(){ //function = fungsi
    //tipe data dan variable
    string password; //tipe data string untuk teks ex: 'dasar pemrograman'
                    //variable adalah sebuah tempat penyimpanan data di memeori

    cout << "==Login===" << endl; //print
    cout << "masukukkan password=" << password << endl;
    cin >> password;

    //operasi seleksi if/else
    if (password == "ayam") {  //== operater pembanding or != artinya tidak sama dengan
        cout << "Selamat datang di Teknik Lingkungan" << endl;
    } else {
        cout << "Password wrong, try again" << endl;
    }

    return 0;
}




// step 1 :saya membuat variable password
// step 2 : print dan inputkan password
// step 3 : membuat kondisi dengan nilai password "ayam"
// step 4 : cetak selamat datang di FEB  jika nilai ayam benar password
// step 5 : jika maka cetak password salah
