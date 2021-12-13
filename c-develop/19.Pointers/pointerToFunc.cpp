// pointer to functions
#include <iostream>
using namespace std;

int addition(int x, int y)
{
    return (x + y);
}

int subtraction(int x, int y)
{
    return (x - y);
}

int operation(int a, int b, int (*functocall)(int, int))
{
    int g;
    g = (*functocall)(a, b);
    return (g);
}

int main()
{
    int m, n;
    int (*minus)(int, int) = subtraction;

    m = operation(10, 5, addition);
    cout << m << endl;
    n = operation(25, m, minus);
    cout << n << endl;
    return 0;
}

/*
output:
15
10
*/