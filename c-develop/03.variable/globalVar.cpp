#include <iostream>
using namespace std;

// Global variable declaration:
int g; //g mean that global 

int main()
{
    // Local variable declaration:
    int x, y;

    // actual initialization
    x = 5;
    y = 10;
    g = x + y;

    cout << "This is global variable:" << g << endl;

    return 0;
}