// Introduction to Functions in C
/*
#include <stdio.h>

int areaOfRect(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}

int main()
{
    int l = 10, b = 5;
    int area = areaOfRect(l, b);
    printf("%d\n", area);

    l = 10, b = 90;
    area = areaOfRect(l, b);
    printf("%d", area);
}
*/

//////////// FUNCTION DEFINITION ///////////////
/*
#include <stdio.h>

int add(int, int);

int main()
{
    int m = 20, n = 30, sum;
    sum = add(m, n);
    printf("Sum of %d", sum);
    return 0;
}

int add(int a, int b)
{
    return (a + b);
}
*/
// Argument vs Parameter

// Paraneter: is a variable in the declaration and definition of the function.
// Argument: is the actual value of the parameter that gets passed to the function

// Note: Parameter is also called as Formal Parameter and Argument is also called as Actual Parameter.

/////////// CALL BY VALUE AND CALL BY REFERENCE //////////

////////// Call by value
// Here values of actual parameters will be copied to formal parameters and these two different parameters store values in different locations.

///////// Call by reference
// Here both actual and formal parameters refers to same memory location. Therefore, any changes made to the formal parameters will get reflected to actual parameters.
// Here instead of passing values, we pass addresses

//////// FUNCTIONS (solved question 1) ////////////
// #include <stdio.h>

// int func(int);

// int main()
// {
//     int number = 435;
//     int res = func(number);
//     printf("The value returned by the func is %d", res);
//     return 0;
// }

// int func(int num)
// {
//     int count = 0;
//     while (num)
//     {
//         count++;
//         num >>= 1;
//     }
//     return (count);
// }
// output: 9

//////// FUNCTIONS (solved question 2) ////////////

// #include <stdio.h>

// void f1(int a, int b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }

// void f2(int *a, int *b)
// {
//     int c;
//     c = *a;
//     *a = *b;
//     *b = c;
// }

// int main()
// {
//     int a = 4, b = 5, c = 6;
//     f1(a, b);
//     f2(&b, &c);
//     printf("%d", c - a - b);
//     return 0;
// }

// output: -5

//////// FUNCTIONS (solved question 3) ////////////

// #include <stdio.h>

// int fun()
// {
//     static int num = 16;
//     return num--;
// }

// int main()
// {
//     for (fun(); fun(); fun())
//     {
//         printf("%d ", fun());
//     }
//     return 0;
// }

// output: 14 11 8 5 2

//////// STATIC FUNCTIONS IN C ////////////

// In C, functions are global by default.
// This means if we want to access the function outside from the file where it is declared, we can access it easily.
// Now if we want to restrict this access, then we make our function static by simply putting a keyword satatic in front of the function.

#include <stdio.h>
#include <stdlib.h>

int fun(int, int);
int main()
{
    int sum = fun(3, 4);
    printf("%d", sum);
    return 0;
}

/////////// Important take aways
// * Static functions are restricted to the files where they are declared;
// * Reuse of the same function in another file is possible