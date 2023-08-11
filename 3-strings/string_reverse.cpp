#include <iostream>
#include "findlength.h"
using namespace std;

class StringReverse
{
private:
    char str[10];

public:
    void setString();
    void findReverse();
};

void StringReverse::setString()
{
    cout << "Enter a string: ";
    cin >> str;
}

void StringReverse::findReverse()
{
    int i;
    for (i = findLength(str) - 1; i >= 0; i--)
        cout << str[i];
}

int main()
{
    StringReverse obj;
    obj.setString();
    obj.findReverse();

    return 0;
}