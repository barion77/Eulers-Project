#include <iostream>

//By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number ?

int main()
{
    int x = 2;
    int numOfPrimeNumbers = 0;
    int solution = 0;

    while (numOfPrimeNumbers != 10001)
    {
        int cout = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
                cout++;
        }
        
        if (cout == 2)
        {
            numOfPrimeNumbers++;
            solution = x;
        }

        x++;
    }
    
    // Solution: 104743
}