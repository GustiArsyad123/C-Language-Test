// Penambah
#include <iostream>
using namespace std;

void meningkat(void *data, int psize)
{
    if (psize == sizeof(char))
    {
        char *pchar;
        pchar = (char *)data;
        ++(*pchar);
    }
    else if (psize == sizeof(int))
    {
        int *pint;
        pint = (int *)data;
        ++(*pint);
    }
}

int main()
{
    char x = 'a';
    int y = 100;
    meningkat(&x, sizeof(x));
    meningkat(&y, sizeof(y));
    cout << x << ", " << y << '\n';
    return 0;
}

/*
output:
b, 101
*/