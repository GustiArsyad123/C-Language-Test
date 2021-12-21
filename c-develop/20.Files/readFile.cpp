#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Create a text file
    //ofstream MyFileWrite("createFile.txt");

    // Write to the file
    //MyFileWrite << "Hello File! testing read the file 2.";

    // Close the file
   // MyFileWrite.close();

    // Create a text string, which is used to output the text file
    string RandomText;

    // Read from the text file
    ifstream MyFileRead("createFile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyFileRead, RandomText))
    {
        // Output the text from the file
        cout << RandomText << endl;
    }

    // Close the file
    MyFileRead.close();

    return 0;
}