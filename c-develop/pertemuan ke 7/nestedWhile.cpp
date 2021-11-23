#include <iostream>
#include <ncurses.h>
using namespace std;
int main() {
    int i=1;
    int j;
    while(i<=5)
    {
        j=1;
        while(j<=10){
    cout <<j;
    j++; 
    }
    cout<< endl;
    i++;
    }
    getch();
    return 0;
}

