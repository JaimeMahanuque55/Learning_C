// Problem statement:
// WAP to print Fibonacci series upto n number of terms.

// The term Fibonacci comes from the name of an Italian Mathematician Leonardo of pisa, known as Fibonacci.

////////////// What is Fibonacci Series?
// In fibonacci series, next term is obtained by taking sum of previous two terms

// Mathematically,
// fib(n) = fib(n - 1) + fib(n - 2)

// logic
// a = 0;                         Example:
// b = 1;                         n = 6
//
// for (i = 1; i < = n; i++)   Iteration 1:   Iteration 2:  Iteration 3:
// {
//     printf("%d ", a);       0              1             1
//     result = a + b;         result = 1     result = 2    result = 3
//     a = b;                  a = 1          a = 1         a = 2
//     b = result;             b = 1          b = 2         b = 3
// }
//                             Iteration 4:   Iteration 5:  Iteration 6:
//                             2              3             5
//                             result = 5     result = 8    result = 13
//                             a = 3          a = 5         a = 8
//                             b = 5          b = 8         b = 13

// code

#include <stdio.h>
int main()
{
    int a, b, result, n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
}