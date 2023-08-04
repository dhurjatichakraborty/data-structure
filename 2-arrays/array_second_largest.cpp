/*
 * This program finds out the largest element amongst an integer array. It also prints all elements present
 */

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int numbers[] = {199, 8, 7, 100, 99};
    int i, largest, second_largest, size;

    size = sizeof(numbers) / sizeof(numbers[0]);
    largest = second_largest = INT32_MIN;

    for (i = 0; i < size; i++)
    {
        if (numbers[i] > largest)
        {
            second_largest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > second_largest && numbers[i] < largest)
        {
            second_largest = numbers[i];
        }
    }

    cout << "The array elements are:\n";
    for (i = 0; i < size; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << "\nThe largest element in the given array is: " << largest;
    cout
        << "\nThe second largest element in the given array is: " << second_largest << endl;

    return 0;
}
