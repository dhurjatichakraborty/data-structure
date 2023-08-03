// Usage of a pointer variable

using namespace std;
#include <iostream>

int main()
{
    int a = 10;
    int *ptrA;
    ptrA = &a; // assigning the address to ptrA
    cout << "Value of a is " << *ptrA << " and it is stored at " << ptrA << endl;
    return 0;
}