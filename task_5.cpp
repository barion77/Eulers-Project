#include <iostream>

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

int main()
{
    int x = 1;
    int solution = 0;
    
    while (solution == 0)
    {
        for (int i = 1; i <= 20; i++)
        {
            if (x % i == 0)
                solution = x;
            else
            {
                solution = 0;
                x++;
                break;
            }
        }
    }

    // Solution: 232792560
}