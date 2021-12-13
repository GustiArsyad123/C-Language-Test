// pointer dan const
#include <iostream>
using namespace std;

void incrementAll(int *mulai, int *berhenti)
{
    int *current = mulai;
    while (current != berhenti)
    {
        ++(*current); // nilai kenaikan pointer
        ++current;    // pointer kenaikan
    }
}

void printAll(const int *start, const int *stop)
{
    const int *current = start;
    while (current != stop)
    {
        cout << *current << '\n';
        ++current; // increment pointer
    }
}

int main()
{
    int numbers[] = {100, 200, 300, 400, 500};
    incrementAll(numbers, numbers + 5);
    printAll(numbers, numbers + 5);
    return 0;
}