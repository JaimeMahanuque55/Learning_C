// Problem statement:
// WAP to add two numbers without using '+' operator.

// Idea is to use incremement and decrement operators

// example: x = 3, y = 4                        1. x = 4, y = 3
//                                              2. x = 5, y = 2
// Algorithm                                    3. x = 6, y = 1
// Step 1: x++; y--;                            4. x = 7, y = 0 stop
// Step 2: repeat step 1 until y becomes 0

/////////////////// code
/*
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    while (y != 0)
    {
        x++;
        y--;
    }
    printf("Sum of two numbers is %d", x);
    return 0;
}
*/

///////////// code with negative values
/*
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the two numbers you want to add: ");
    scanf("%d %d", &x, &y);

    if (y > 0)
    {
        while (y != 0)
        {
            x++;
            y--;
        }
    }
    else if (y < 0)
    {
        while (y != 0)
        {
            x--;
            y++;
        }
    }
    printf("Sum of two numbers is %d", x);
    return 0;
}

*/

//////////// Other solution

// Idea is to use Half Adder logic

// Implementation                    5 -> 0101         7 -> 0111
// while(b != 0)                     10 ->1010         2 -> 0010
//{                                  ----------        ---------
//  sum = a^b;                       15 <-1111         9 <- 1001
//  carry = (a&b) << 1;
//  a = sum;                         sum  1111
//  b = carry;                       carry 0000
//}

#include <stdio.h>

int main()
{
    int sum, carry, a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    printf("Sum of two numbers is: %d", sum);
    return 0;
}