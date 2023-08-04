/*
 * This program finds out the largest element amongst an integer array. It also prints all elements present
 */

// using namespace std;
// #include <iostream>

// int main()
// {
//     int numbers[] = {199, 8, 7, 17, 99};
//     int i, largest = 0, second_largest = 0, size;
//     size = sizeof(numbers) / sizeof(numbers[0]);
//     for (i = 1; i < size; i++)
//     {
//         if (numbers[i] > largest)
//         {
//             second_largest = largest;
//             largest = numbers[i];
//         }
//         else if (numbers[i] > second_largest && numbers[i] != largest)
//         {
//             second_largest = numbers[i];
//         }
//     }
//     cout << "Elements in the array are:" << endl;
//     for (i = 0; i < size; i++)
//         cout << numbers[i] << " ";

//     cout << "\nThe largest number is: " << largest << endl;
//     cout << "The second largest number is: " << second_largest << endl;

//     return 0;
// }