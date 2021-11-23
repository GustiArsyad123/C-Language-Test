#include <iostream> //C++ Input / output streams
using namespace std;

int main(){
    int minggu = 2, hari_dlm_seminggu = 3;

    for (int i = 1; i <= minggu; ++i) {
        cout << "Minggu ke: " << i << endl;

        for (int j = 1; j <= hari_dlm_seminggu; j++) {
            cout << "    Hari ke:" << j << endl;
        }
    }

    return 0;
}