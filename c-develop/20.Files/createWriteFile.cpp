#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create and open a text file
    ofstream iniFile("createFile.txt");

    // Write to the file
    iniFile << "Hello File, this testing!";

    // close the file
    iniFile.close();

    return 0;
}