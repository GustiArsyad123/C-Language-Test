// arimatika pointer
#include <iostream>
using namespace std;

int main()
{

    char *mychar;
    short *myshort;
    long *mylong;

    ++mychar;
    ++myshort;
    ++mylong;

    mychar = mychar + 1;
    myshort = myshort + 1;
    mylong = mylong + 1;

    *p++;   // sama dengan *(p++): penunjuk kenaikan, dan dereferensi alamat yang tidak bertambah
    *++p;   // sama dengan *(++p): penunjuk kenaikan, dan alamat tambahan dereferensi
    ++*p;   // sama dengan ++(*p): penunjuk dereferensi, dan tingkatkan nilai yang ditunjuknya
    (*p)++; // pointer dereference, dan post-increment nilai yang ditunjuknya
}