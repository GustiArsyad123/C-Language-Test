#include <iostream>
using namespace std;
int main()
{
string name;
int age;
cout << "Please enter your name:" << endl;
getline(cin, name);
cout << "Please enter your age:" << endl;
cin >> age;
cout << "Result in below:" << endl;
cout << name << endl;
cout << age << endl;
return 0;
}