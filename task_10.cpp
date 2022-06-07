#include <iostream>
#include <vector>

/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
   Find the sum of all the primes below two million. */

int main()
{
    long long int solution = 0;
    int n = 2000000;

    std::vector<bool> primeNums;

    for (int i = 2; i < n; i++)
        primeNums.push_back(1);

    for (int i = 2; i < primeNums.size(); i++)
    {
        if (primeNums[i])
        {
            for (int j = i * 2; j < primeNums.size(); j += i)
            {
                primeNums[j] = false;
            }
        }
    }

    for (int i = 2; i < primeNums.size(); i++)
        if (primeNums[i])
            solution += i;

    // Solution: 142913828922
}