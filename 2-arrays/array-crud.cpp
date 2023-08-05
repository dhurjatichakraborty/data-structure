
#include <iostream>
using namespace std;

class ArrayCRUD
{
private:
    int numbers[10];

public:
    void acceptNumbers();
    void displayNumbers();
    ArrayCRUD()
    {
        /*
         *Fills contiguous areas of memory
         */
        fill(numbers, numbers + 10, 0);
    }
};

void ArrayCRUD::acceptNumbers()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "numbers[" << i << "] = ";
        cin >> numbers[i];
    }
}

void ArrayCRUD::displayNumbers()
{
    // for loop to print the array elements.
    cout << "\nThe numbers in the array are" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << " ";
    }
}

int main()
{
    ArrayCRUD obj;
    obj.acceptNumbers();
    obj.displayNumbers();

    return 0;
}