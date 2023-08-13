#include <iostream>
using namespace std;

struct StructPointer
{
    int data;
    int multiplyByTen(struct StructPointer var);
};

int StructPointer::multiplyByTen(StructPointer var)
{
    cout << "Data multiplied by 10 is: " << var.data * 10;

    return (sizeof(var));
}

int main()
{
    struct StructPointer var;
    var.data = 1;
    int a = var.multiplyByTen(var);
    cout << sizeof(var);
    return 0;
}