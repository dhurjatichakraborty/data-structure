using namespace std;
#include <iostream>

struct example
{
    int data;
    float info;
};

struct example var;

int main()
{
    cout << "Enter the value of DATA :: ";
    cin >> var.data;
    cout << "Enter the value of INFO :: ";
    cin >> var.info;

    cout << "You have entered\n"
         << "DATA :: " << var.data << "\nINFO :: " << var.info << endl;
    cout << "Anf the size of structure variable (var) is " << sizeof(var.data) << "(int) + " << sizeof(var.info) << "(float) = " << sizeof(var) << " bytes\n";
}