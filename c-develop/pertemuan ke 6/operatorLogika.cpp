#include <iostream>
using namespace std;

int main(){
    bool bolean1 = true;
    bool bolean2 = false; //
    bool result;

    //operator logika dan (and)
    result = bolean1 && bolean1;
    cout << "hasil dari Boolean1 && Boolean1:" << result << endl;

    result = bolean1 && bolean2;
    cout << "hasil dari Boolean1 && Boolean2:" << result << endl;

    result = bolean2 && bolean1;
    cout << "hasil dari Boolean2 && Boolean1:" << result << endl;

    result = bolean2 && bolean2;
    cout << "hasil dari Boolean2 && Boolean2:" << result << endl;

    //operator logika atau (or)
    result = bolean1 || bolean1;
    cout << "hasil dari Boolean1 || Boolean1:" << result << endl;

    result = bolean1 || bolean2;
    cout << "hasil dari Boolean1 || Boolean2:" << result << endl;

    result = bolean2 || bolean1;
    cout << "hasil dari Boolean2 || Boolean1:" << result << endl;

    result = bolean2 || bolean2;
    cout << "hasil dari Boolean2 || Boolean2:" << result << endl;

    //operator negasi
    result = !bolean1;
    cout << "hasil dari !bolean1;" << result << endl;

    result = !bolean2;
    cout << "hasil dari !bolean2;" << result << endl;

    return 0;


}