#include <iostream>
#include "findlength.h"
using namespace std;

class StringConcat
{
private:
    char str1[15];
    char str2[15];
    char final_str[30];

public:
    void acceptString();
    void concatenateStrings();
    void displayConcatenatedString();
};

void StringConcat::acceptString()
{
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
}

void StringConcat::concatenateStrings()
{
    int i, len_str1 = findLength(str1), len_str2 = findLength(str2);
    for (i = 0; i <= (len_str1 + len_str2); i++)
    {
        if (i < len_str1)
            final_str[i] = str1[i];
        else if (i == len_str1)
            final_str[i] = ' ';
        else
            final_str[i] = str2[(i - 1) - len_str1];
    }
    final_str[i] = '\0';
    displayConcatenatedString();
}

void StringConcat::displayConcatenatedString()
{
    cout << "The first string is: " << str1 << endl;
    cout << "The second string is: " << str2 << endl;
    cout << "The concatenated string is: " << final_str << endl;
}

int main()
{
    StringConcat obj;
    obj.acceptString();
    obj.concatenateStrings();
}