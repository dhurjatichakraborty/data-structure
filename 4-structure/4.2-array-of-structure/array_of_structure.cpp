// Demonstrate of struct's array variable

using namespace std;
#include <iostream>
#define SIZE 10

struct structure_array
{
    int data;
} var[SIZE];

int main()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        cout << "var[" << i << "].data = ";
        cin >> var[i].data;
    }

    cout << "\nThe elements inside the array of structure variable VAR\n";
    cout << "--------------------------------------------------------\n";
    for (i = 0; i < SIZE; i++)
        cout << var[i].data << " ";
    cout << endl;
    return 0;
}