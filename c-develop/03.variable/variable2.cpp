#include <iostream>

using namespace std;

int main()
{
    // deklarasi tipe data variabel
    string name;
    int age;
    char gender;

    // --- proses input ---
    cout << "What is your name?" << endl;
    cout << "Answer: ";
    // menyimpan data ke variabel
    getline(cin, name);

    cout << "How old are you?" << endl;
    cout << "Answeer: ";
    // menyimpan data ke variabel
    cin >> age;

    cout << "Gender [M/F]: ";
    // menyimpan data ke variabel
    cin >> gender;

    // --- proses output ---
    cout << "Nice to meet you, " << name << endl;
    cout << "Now you are old: " << age << endl;
    cout << "and you are gender: " << gender << endl;

    return 0;
}