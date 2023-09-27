// Print numbers from 1 to 100
// but
// When the number is a multiple of 3, print fizz
// When the number is multiple of 5, print buzz
// When the number is a multiple of both print both : fizzbuzz

#include <stdio.h>

void main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
            printf("%d fizz\n", i);
        if (i % 5 == 0)
            printf("%d buzz\n", i);
        if (i % 3 == 0 && i % 5 == 0)
            printf("%d FIZZBUZZ\n", i);
    }
}