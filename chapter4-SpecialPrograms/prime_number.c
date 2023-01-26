// Problem statement:
// WAP to check whether a number is prime or not?

///////// BASIC TERMINOLOGY
// * Prime number - A NUMBER GREATER THAN 1 is called a prime number, if it has only two factors, namely 1 and the number itself.

// Example: 2, 3, 5, 7, 11...

// * Composite number - A composite number is a positive integer which is not prime i.e which has factors other than 1 and itself.
// example: 4, 6, 8, 9, 10...

// Question - Is 1 a prime number?
// Solution - No. It is not a prime number because according to the definition of prime numbers - A prime number is a number which has exactly two divisors, 1 and itself. But 1 has only one divisor i.e itself. Therefore it is not a prime number.
// Another reason - it violates the fundamental therorem of arithmetic
// According to this theorem - Every positive integer greater than one can be writen uniquely as the product of primes.

// Big picture
// In order to find whether a number is prime or not, we first need to calculate the square root of that number and then we divide that number by numbers less than or equal to the square root of that number. If it is divisible by any of the numbers then we can say that the number is not a prime number else it is a prime number.

// Example: Supose we need to find whether 23 is prime number or not
// Step #1 - Take square root of 23. Which is nearly 4.7958 = 5;
// Step #2 - divide 23 by numbers greater than 2 and less than or equal to 5. If it is divisible by any of those numbers then it is not prime else it is prime.
// As 23 is not divisible by any of those numbers therefore, 23 is a prime number

///////////////////// Writing the code
/////////////////// Part 1 - Finding the square root

// #include <math.h>
// int main()
//{
//   int x, val1;
//   val1 = ceil(sqrt(x)); // sqrt means square root
// }                       // available in math.h library
//                         // Syntax:  double sqrt(double x)

// ceil function returns a smallest integer greater than or equal to x;
// available in math.h libary
// Syntax:  double ceil(double x)
// Example: sqrt(2) = 1.414
//          ceil(1.414) = 2

///////////////// Part 2 - check the visibility
// int val2 = x, count = 0;
// for (i = 2; i <= val1; i++)
// {
//      if (val2 % i == 0)
//          count = 1;
// }

//////////////// Part 3 - Check whether a number is prime or not

// if((count == 0 && val2 !=1) || val2 == 2 || val2 == 3)
//       printf("%d is a prime number", val2);
// else
//       printf("%d is not a prime number", val2);

// code

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int i, val1, val2, count = 0;
    printf("Please enter a number (only positive integer): ");
    scanf("%d", &x);

    val1 = ceil(sqrt(x));
    // printf("%d", val1);
    val2 = x;

    for (i = 2; i <= val1; i++)
    {
        if (val2 % i == 0)
            count = 1;
    }
    if ((count == 0 && val2 != 1) || val2 == 2 || val2 == 3)
        printf("%d is a prime number", val2);
    else
        printf("%d is not a prime number", val2);
    return 0;
}