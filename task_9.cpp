#include <iostream>

int main()
{
    int solution = 0;
    int x = 1000;

    for (int a = 1; a < x + 1; a++)
    {
        for (int b = a + 1; b < x + 1; b++)
        {
            int c = x - a - b;
            if (pow(a, 2) + pow(b, 2) == pow(c, 2))
                solution = a * b * c;
        }
    }

    // Solution: 31875000
}