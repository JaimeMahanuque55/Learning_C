// Problem statement:
// WAP to check whether a number is a Strong number or not?

// What is a strong number?
// Strong number: is a number in which the sum of factorial of individual digits of a number is equla to the original number;

// For example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

//////////////// Factorial basics
// Definition: Factorial of a positive integer n, is the number which is obtained by multiplying all positive integers less than or equal to n.

// ex1: 3! = 3 * 2 * 1 = 6
// ex2: 5! = 5 * 4 * 3 * 2 * 1 = 120

// In general,
// n! = n * (n - 1) * (n - 2) * .. * 3 * 2 * 1

// Step #1 - Calculate the factorial of each digit of a number and add them.
// logic for factorial

// q = n, fact = 1, result = 0;             q = 134
// while (1 != 0)                           rem = 5
// {                                        fact = 1*2*3*4*5 = 120
//    rem = q%10;                           result = 120
//    for(i = 1; i <= rem; i++)
//    {                                     q = 14
//       fact = fact*i;                     rem = 4
//    }                                     fact = 1*2*3*4 = 24
//    result = result + fact;               result = 120 + 24 = 144
//    fact = 1;
//    q = q/10;                             q = 1
// }                                        rem = 1
//                                          fact = 1 = 1
//                                          result = 144 + 1 = 145

// Step #2 - Check whether the calculated result is equal to the actual number or not
// if(result == number)
//        printf("%d is a strong number", number);
// else
//        printf("%d is not a strong number", number);

// code

#include <stdio.h>

int main()
{
    int n, q, rem, fact = 1, i, result = 0;
    printf("Please enter a number: ");
    scanf("%d", &n);

    q = n;
    while (q != 0)
    {
        rem = q % 10;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }
    if (result == n)
    {
        printf("%d is a strong number", n);
    }
    else
    {
        printf("%d is not a strong number", n);
    }
    return 0;
}