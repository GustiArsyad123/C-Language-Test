#include <iostream>

using namespace std;

void Procedure1(int var1, int var2, int var3){
    var1 = 2;
    

    return var1 + var2;
}

int Function1(int Var);

void Procedure2(int var1, int var2, int var3)
{
    var3 = var3 + 1;
}

int Function2(int var){
    return var +1;
}

int main(){
    Procedure1(2, 4, 5);
    Procedure2(1, 2, 3);
    Function1(10);
    Function2(3);
}