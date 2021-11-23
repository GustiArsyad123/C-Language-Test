#include <iostream>
#include <curses.h>
using namespace std;
int main()
{
    string arr[3][4]={
    {"Niru","Saru","Pithu","Suthu"},
    {"Kuru","Hari","Ram","Sam"},
    {"Nilani","Roja","Mala","Mani"},
    };
    int i=0;
    while(i<=2){
        int j=0;
    while(j<=3){
      cout << arr[i][j] << endl;
      j++;
    }
    i++;
    }
    cout << "End the program" << endl;
    getch();
    return 0;
}