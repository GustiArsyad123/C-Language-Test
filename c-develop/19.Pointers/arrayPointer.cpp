// pointer dan array
#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int *p;
    p = numbers;
    *p = 50;
    p++;
    *p = 60;
    p = &numbers[2];
    *p = 70;
    p = numbers + 3;
    *p = 80;
    p = numbers;
    *(p + 4) = 90;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", " << endl;
    return 0;
}