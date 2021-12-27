// Data and time
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // current date or time based on current system
    time_t Now = time(0);

    // convert now to string form
    char *dateTime = ctime(&Now);

    cout << "The local date and time is: " << dateTime << endl;

    // convert now to tm struct for UTC
    tm *gmtm = gmtime(&Now);
    dateTime = asctime(gmtm);
    cout << "The UTC date and time is:" << dateTime << endl;
}