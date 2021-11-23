#include <iostream>
using namespace std;

// Global variable declaration:
int global = 30; //var global

int main()
{
    // Local variable declaration:
    int global = 10;

    cout << "This var Local global: " << global << endl;

    return 0;
}