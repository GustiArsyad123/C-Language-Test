// Initializing arrays = inisialisasi array

#include <iostream>
using namespace std;

int main()
{
    cout << "=====Full======" << endl;
    int full[5] = {100, 50, 60, 2000, 10200};
    //"0=100, 1=50, 2=60, 3=2000, 4=10200"
    int y = 0;
    while (y < 5)
    {
        cout << full[y] << endl;
        y++;
    }

    cout << "=====notFull======" << endl;
    // default values
    int notFull[5] = {100, 200, 300};
    //"0=100, 1=200, 2=300, 3=0, 4=0"
    // cout << notFull[0] << endl; // print 100
    // cout << notFull[1] << endl; // print 200
    // cout << notFull[2] << endl; // print 300
    // cout << notFull[3] << endl; // print 0
    // cout << notFull[4] << endl; // print 0
    
    //perulangan while
    int x = 0;
    while (x < 5)
    {
        cout << notFull[x] << endl;
        x++;
    }

    cout << "=====nothingArrayValue======" << endl;
    int nothingArrayValue[5] = {};
    //"0=0, 1=0, 2=0, 3=0, 4=0"
    int z = 0;
    while (z < 5)
    {
        cout << nothingArrayValue[z] << endl;
        z++;
    }

    // ukuran otomatis value untuk array
    // int arrayAutomatic[] = {16, 2, 77, 40, 12071};

    /* note:
     inisialisasi yang saman untuk array
     int testing[] = {100, 200, 300};
     int testing[]{100, 200, 300};
     **/
}
/*
Output
=====Full======
100
50
60
2000
10200
=====notFull======
100
200
300
0
0
=====nothingArrayValue======
0
0
0
0
0
**/