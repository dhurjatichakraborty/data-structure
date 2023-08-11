#include <iostream>
using namespace std;

int decimalToBinary(int num, long int binary_array[])
{

    int i = 0, j, no_of_elements;
    cout << "(" << num << ")base10 = (";
    while (num > 0)
    {
        binary_array[i++] = num % 2;
        num /= 2;
    }
    no_of_elements = i - 1;

    for (j = no_of_elements; j >= 0; j--)
    {
        cout << binary_array[j];
    }
    cout << ")base2" << endl;

    return no_of_elements;
}

// int binaryToDecimal(int no_of_elements, long int binary_array[])
// {
//     // base 2 to base 10 conversion
//     unsigned long int result = 0;
//     if ((binary_array[--no_of_elements] == '1') && (++
// }

int main()
{
    long int binary_array[10], no_of_elements, binary_number;
    int decimal_number, i = 0, j;

    cout << "Enter a decimal number :: ";
    cin >> decimal_number;

    no_of_elements = decimalToBinary(decimal_number, binary_array);
    // binary_number = binaryToDecimal(no_of_elements, binary_array);

    return 0;
}
