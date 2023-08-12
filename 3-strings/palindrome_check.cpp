#include <iostream>
#include "findlength.h"
using namespace std;

class CheckPalindrome
{
private:
    char str[20];

public:
    void getString();
    bool isPalindrome();
};

void CheckPalindrome::getString()
{
    cout << "\nEnter a string : ";
    cin >> this->str;
}

bool CheckPalindrome::isPalindrome()
{
    int i, length = findLength(this->str);
    for (i = 0; i < length; i++)
    {
        if (this->str[i] != this->str[(length - i) - 1])
            return false;
    }
    return true;
}

int main()
{
    CheckPalindrome obj;
    obj.getString();
    bool isPalindromic = obj.isPalindrome();
    (isPalindromic) ? cout << "Palindrome\n" : cout << "Not Palindrome\n";
}