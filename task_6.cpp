#include <iostream>

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int main()
{
    int a = 0;
    int b = 0;
    int solution = 0;

    for (int i = 1; i <= 100; i++)
    {
        a += pow(i, 2);
        b += i;
    }

    solution = pow(b, 2) - a;

    // Solution: 25164150
}