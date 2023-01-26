/////////////// CONDITIONALS (SWITCH) //////////////////

////////////// What is switch?

// Switch is a grear replacement to long else if constructs.

// code examples
// using else if constructs
/*
#include <stdio.h>

int main()
{
    int x = 2;

    if (x == 1)
        printf("x is 1");
    else if (x == 2)
        printf("x is 2");
    else if (x == 3)
        printf("x is 3");
    else
        printf("x is a number other than 1, 2, 3");
}
*/

// using switch constructs

/*
#include <stdio.h>

int main()
{
    int x = 2;

    switch (x)
    {
    case 1:
        printf("x is 1");
        break;
    case 2:
        printf("x is 2");
        break;
    case 3:
        printf("x is 2");
        break;
    default: // optional
        printf("x is a number other than 1, 2, 3");
        break;
    }
}
*/
//////////////// Facts related to switch

// 1. You are not allowed to add duplicate cases.
// 2. Only those expressions are allowed in switch which results in an integral constant value.
// 3. Float value is not allowed as a constant value in case label. Only integer constants/constant expressions are allowed in case label.
// 4. Variable expressions are not allowed in case labels. Although macros are allowed.

// Not allowed
/*
#include <stdio.h>

int main()
{
    int x = 2, y = 2, z = 23;

    switch (x)
    {
    case y:
        printf("Number is 2");
        break;
    case z:
        printf("Number is 2");
        break;
    default:
        break;
    }
}
*/

// Allowed
/*
#include <stdio.h>
#define y 2
#define z 23
int main()
{
    int x = 2;
    switch (x)
    {
    case y:
        printf("Number is 2");
        break;
    case z:
        printf("Number is 23");
        break;
    default:
        printf("Default case");
        break;
    }
}
*/

// 5. Default can be placed anywhere inside switch. It will get evaluated if no match is found.

/////////////// FOR AND WHILE LOOPS ////////////////

////////// While loop

// code example
/*
#include <stdio.h>

int main()
{
    int i = 3;

    while (i >= 0)
    {
        printf("%d", i);
        i--;
    }
}
*/

/////////// For Loop
/*
#include <stdio.h>

int main()
{
    int i;

    for (i = 3; i > 0; i--)
    {
        printf("%d", i);
    }
}
*/

/////////////// DO-WHILE LOOP /////////////////

////////////// Difference Between while loop and Do-while loop

// while
/*
#include <stdio.h>

int main()
{
    int i = 0;

    while (i > 0)
    {
        printf("%d", i);
        i--;
    }
}
*/

// Output: No output

// do-while
/*
#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("%d", i);
        i--;
    } while (i > 0);
}
*/

/////////////// When should i prefer do-while over while?

// Write a program which allows user to enter an integer until he/she enters a value zero.

// code example
// with while loop
/*
#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer\n");
    scanf("%d", &n);

    while (n != 0)
    {
        printf("Enter an integer\n");
        scanf("%d", &n);
    }

    printf("You are out of the loop");
}
*/

// with do-while
/*
#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter an integer\n");
        scanf("%d", &n);
    } while (n != 0);

    printf("You are out of the loop");
}
*/

/////////////// LOOPE CONTROL STATEMENTS - BREAK AND CONTINUE /////////////////

////////////// Break
// Used to terminate from the loop
// Example: Write a program (WAP) to allow user to enter integers until he/she enters a negative number or zero.

/*
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        if (n < 0)
            break;
        printf("Enter a number\n");
        scanf("%d", &n);
    }
}
*/

//////////////// Continue
// Similar to break but instead of terminating from the loop, it forces to execute the next iteration of the loop.

// example: WAP to print all odd numbers from 1 to 20.
/*
#include <stdio.h>

int main()
{
    int i, n = 2;
    for (i = 1; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }
        printf("%d", i);
    }
}
*/

///////////////// CONDITIONAL AND LOOPS (SOLVED PROBLEM 1) ///////////////

// How many times will "Hello, world" be printed in the below program?

/*
#include <stdio.h>

int main()
{
    int i = 1024; // 1024 = 100 0000 0000 in binary
    for (; i; i >>= 1)
        printf("Hello, world");
    return 0;
}

*/

// output: hello world was printed 11 times.

///////////////// CONDITIONAL AND LOOPS (SOLVED PROBLEM 2) ///////////////

// What is the output of the following C program fragment?

/*
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 20; i++)
    {
        switch (i)
        {
        case 0:
            i += 5;
        case 1:
            i += 2;
        case 5:
            i += 5;
        default:
            i += 4;
        }
        printf("%d", i);
    }
}
*/
// output: 16 21; Because theres no break; at the cases

///////////////// CONDITIONAL AND LOOPS (SOLVED PROBLEM 3) ///////////////

// How many times will "Neso" be printed on the screen?
/*
#include <stdio.h>

int main()
{
    int i = -5;
    while (i <= 5)
    {
        if (i >= 0)
            break;
        else
        {
            i++;
            continue;
        }
        printf("Neso");
    }
}
*/
// output: 0 times.

////////// Homework
// What is the output of the following C program fragment?
/*
#include <stdio.h>

int main()
{
    int i = 0;
    for (printf("one\n"); i < 3 && printf(""); i++)
    {
        printf("Hi!\n");
    }
    return 0;
}
*/

// output: one.

///////////////// CONDITIONAL AND LOOPS (SOLVED PROBLEM 4) ///////////////

// What is the output of the following C program fragment?
// Assuming size of unsigned int is 4 bytes.
/*
#include <stdio.h>
int main()
{
    unsigned int i = 500;
    while (i++ != 0)
        ;
    printf("%d", i);
    return 0;
}
*/
// Output: 1.
// NOTE:
// Range of unsigned int (4 bytes) 0 to 4294967295
// When i reaches 4294967295, then because of i++, it comes back to 0
// As 0 not equal to 0 is false therefore we come outside of the while loop.
// After we come out of the loop, i will contain 1 because of post increment operator. Therefore, 1 will be printed on the screen.

///////////////// CONDITIONAL AND LOOPS (SOLVED PROBLEM 5) ///////////////

// What is the output of the following C program fragment?

#include <stdio.h>

int main()
{
    int x = 3;
    if (x == 2)
        ;
    x = 0;
    if (x == 3)
        x++;
    else
        x += 2;

    printf("x = %d", x);
    return 0;
}

// output: x = 2.