#include <iostream>
using namespace std;

struct StructPointer
{
    int data;
    void multiplyByTen(struct StructPointer var)
    {
        cout << "Data multiplied by 10 is: " << var.data * 10;
    }
};

int main()
{
    struct StructPointer var;
    var.data = 1;
    var.multiplyByTen(var);

    return 0;
}