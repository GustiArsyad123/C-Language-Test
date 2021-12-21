#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];
    // open a file in write mode.
    ofstream outfile;
    outfile.open("iniFile.dat");

    cout << "Tulis data kedalam file" << endl;
    cout << "Inputkan nama anda: ";
    cin.getline(data, 100);

    // write inputted data into the file.
    outfile << data << endl;

    cout << "Inputkan usia anda: ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the file.
    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    ifstream infile;
    infile.open("iniFile.dat");

    cout << "Membaca data dari file" << endl;
    infile >> data;

    // write the data at the screen.
    cout << data << endl;

    // again read the data from the file and display it.
    infile >> data;
    cout << data << endl;

    // close the opened file.
    infile.close();

    return 0;
}