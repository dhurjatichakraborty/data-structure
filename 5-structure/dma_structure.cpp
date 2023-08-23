#include <iostream>
using namespace std;

struct Temperature
{
    char *day;
    float fahrenheit;
    float centigrade;
};

int main()
{
    struct Temperature *temp;

    temp = (struct Temperature *)malloc(sizeof(struct Temperature));

    // cout << "Enter day :: ";
    // cin >> temp->day;

    cout << "Enter temperature in Fahrenheit :: ";
    cin >> temp->fahrenheit;

    temp->centigrade = (5 / 9) * (temp->fahrenheit - 32);

    cout << temp->centigrade;

    return 0;
}