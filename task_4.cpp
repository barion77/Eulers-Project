#include <iostream>
#include <string>

// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3 - digit numbers.

int main()
{
    // 100 - 999
    int solution = 0;

              // 999    > 100   i--
    for (int i = 100; i < 1000; i++)
    {             
        for (int j = 100; j < 1000; j++)
        {
            std::string strNum = std::to_string(i * j);
            std::string palindrome;
            for (int k = strNum.size() - 1; k >= 0; k--)
                palindrome.push_back(strNum[k]);

            if (palindrome == strNum)
                if (i * j > solution)
                    solution = i * j;
        }
    }
    
    // Solution: 913 x 993 = 906609
}