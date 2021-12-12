// traverse = melewati, Cara lain untuk melintasi array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // cara 1
    cout << "Output" << endl;
    for (int x = 0; x < 5; x++)
        cout << arr[x] << " ";

    cout << endl;
    // Cara 2
    cout << "Cara lain" << endl;
    for (int i = 0; i < 5; i++)
        cout << i[arr] << " ";
    cout << endl;

    return 0;
}

/*
Output
10 20 30 40 50
Cara lain
10 20 30 40 50
**/
