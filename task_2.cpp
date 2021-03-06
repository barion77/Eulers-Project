#include <iostream>


// Каждый следующий элемент ряда Фибоначчи получается при сложении двух предыдущих.
// Начиная с 1 и 2, первые 10 элементов будут :
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

// Найдите сумму всех четных элементов ряда Фибоначчи, которые не превышают четыре миллиона.

int main()
{
    int a = 0;
    int b = 1;
    int sum = 0;

    while (b < 4000000)
    {
        if (b % 2 == 0)
            sum += b;

        int tmp = a;
        a = b;
        b = b + tmp;
    }
    
    // Solution: 4613732
}