#include <iostream>

int main()
{
    long long int num = 600851475143;
    int solution = 0;

    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            int count = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    count++;
            }
            if (count == 2)
            {
                solution = i;
            }
        }
    }

    // Solution: 6857
}