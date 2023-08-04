#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {6, 7, 99, 89, 785, 4571, 12};
    int i, *number_ptr = numbers;

    for (i = 0; i < 10; i++)
    {
        cout << *(number_ptr + i) << " " << (number_ptr + i) << endl;
    }
}