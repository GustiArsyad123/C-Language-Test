//sort program
#include <iostream>
using namespace std;

void main(){
    int arr[5]; //declare a variable of array
    for (int i=0; i<5; i++)
    arr[i] = i;

    random_shuffle (arr, arr+5);
    ostreambuf_iterator(int) out (cout, " ");
    cout << "unsorted array:" ;

    copy (arr, arr+5, out);

}