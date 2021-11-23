#include <iostream>
#include <curses.h>
using namespace std;
int main()
{
    int num[2][3];
    cout <<"Enter element for array"<< endl;
    int i=0;
    while(i<=1){
        int j=0;
        while(j<=2){
            cout <<"num["<<i<<"]["<<j<<"]=";
            cin>>num[i][j];
            j++;
                }
                i++;
    }
    cout << "\n your entered :" << endl;
    int k=0;
    while(k<=1){
        int l=0;
        while(l<=2){
            cout <<"num["<<k<<"]["<<l<<"]="<<num[k][l]<< endl;
            l++;
        }
        k++;
    }
    cout << "End of program" << endl;
    getch();
    return 0;
}