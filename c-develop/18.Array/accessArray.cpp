#include <iostream>
using namespace std;

int main()
{
    // declare array
    int arr[4];
    arr[0] = 10;
    arr[2] = -20;

    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3] << endl;

    return 0;
}

/* Output: 10 2 -20 10 **/
