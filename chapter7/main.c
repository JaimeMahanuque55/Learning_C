////////////// RECURSION IN C /////////////

// Recursion is a process in which a function calls itself directly or indierectly.
// example:
// int fun()
// {
//     ...
//     func();
// }

// example 2:
/*
#include <stdio.h>

int fun(int n)
{
    if (n == 1)
        return 1;
    else
        return 1 + fun(n - 1);
}

int main()
{
    int n = 3;
    printf("%d", fun(n));
    return 0;
}
*/
// output: 3.

// what is the output of the following C program:
/*
#include <stdio.h>

int fun(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return 7 + fun(n - 2); // 2 // 0 //
}

int main()
{
    printf("%d", fun(4));
    return 0;
}

// Output: 15.
*/

////////////// HOW TO WRITE RECURSIVE FUNCTIONS /////////////

///////////// IDEA
// 1. Divide the problem into smaller sub-problems.
// 2. Specify the base condition to stop the recursion.

// problem: Calculate the factorial of a number.

// 1. Divide the problem into smaller sub-problems.

// calculate Fact(4)
// fact(1) = 1
// fact(2) = 2 * 1 = 2 * fact(1)
// fact(3) = 3 * 2 * 1 = 3 * fact(2)
// fact(4) = 4 * 3 * 2 * 1 = 4 * (3)

// fact(n) = n * fact(n - 1)

// 2. Specify the base condition to stop the recursion.
// Base condition is the one which doen't require to call the same function again and it helps in stopping the recursion.

// code
/*
#include <stdio.h>

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of a number %d is %d", n, fact(n));
}
*/

////////////// TYPES OF RECURSION (PART 1) | DIRECT AND INDIRECT RECURSION /////////////

// types of recursion
// 1. Direct recursion
// 2. Indirect recursion
// 3. Tail recursion
// 4. Non-Tail recursion

/////////////// 1. Direct recursion
// A function is called direct recursion if it calls the same function again/

// Structure of Direct recursion.
// fun(){
//     //some code

//     fun();

//     //some code
// }

/////////////// 2. Indirect recursion
// A function (let say fun) is called indirect recursive if it calls another function (let say fun2) and then fun2 calls fun directly or indirectly.

// Structure of Indirect recursion.

// fun(){
//     //some code

//     fun2()

//     //some code
// }

// fun2(){
//     //some code

//     fun();

//     //some code
// }

// Program to understand indirect recursive

// WAP to print numbers from 1 to 10 such a way that when number is odd, add 1 and when number is even, subtract 1.

// code
/*
#include <stdio.h>

void odd();
void even();
int n = 1;

void odd()
{
    if (n <= 16)
    {
        printf("%d ", n + 1);
        n++;
        even();
    }
    return;
}

void even()
{
    if (n <= 10)
    {
        printf("%d ", n - 1);
        n++;
        odd();
    }
    return;
}

int main()
{
    odd();
}
*/

/////////// 3. Tail recursion
// A recursive function is said to be tail recursive if the recursive call the last thing done by the function. There is no need to keep record of the previous state.

// example
/*
#include <stdio.h>

void fun(int n) {
    if (n == 0)
        return;
    else
        printf("%d ", n);
    return fun(n-1);
}

int main() {
    fun(3);
    return 0;
}
*/
/////////// 4. Non-tail recursion
// A recursive function is said to be non-tail recursive if the recursive call is not the last thing done by the function. After returning back, there is some something left to evaluate.

//example 1
/*
#include <stdio.h>

void fun(int n) {
    if (n == 0)
        return;
    fun(n-1);
    printf("%d ", n);
}
int main() {
    fun(3);
    return 0;
}
*/

// example 2
/*
#include <stdio.h>

int fun(int n) {
    if (n == 1)
        return 0;
    else
        return 1 + fun(n/2);
}
int main() {
    printf("%d", fun(8));
    return 0;
}
*/

// Identify whether the following programs are tail recursive or non-tail recursive
//program 1
/*
#include <stdio.h>

int fun2(int n)
{
    if (n == 0)
        return;
    fun2(n/2);
    printf("%d", n%2);
}

int main()
{
    fun2(8);
    return 0;
}
// Non-tail recursive
*/

// program 2
/*
#include <stdio.h>
int fun2(int n)
{
    if(n <= 0)
        return;
    printf("%d ", n);
    fun2(2*n);
    printf("%d ", n);
}


int main()
{
    fun2(8);
    return 0;
}
*/

////////////// ADVANTAGE AND DISADVANTAGE OF RECURSION //////////////

///////////// ADVANTAGE
// Every recursive program can be modeled into an iterative program but recursive programs are more elegant and requires relatively less lines of code.

// Example
// Program to calculate factorial of a number can be written both iterative as well as recursive way as follows:
// Iterative
/*
#include <stdio.h>

int fact(int n)
{
    int res = 1;
    while (n!=0)
    {
        res = res*n;
        n--;
    }
    return res;
}
int main()
{
    printf("%d", fact(5));
    return 0;
}
*/

// Recursive
/*
#include <stdio.h>

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    printf("%d", fact(5));
    return 0;
}
*/

///////////// DISADVANTAGE
// Recursive programs require more space than iterative programs.

///////////// RECURSION (SOLVED PROBLEM 1) ///////////////////

// How many times will get(6) function be invoked before returning to the main()?
/*
#include <stdio.h>

void get(int n)
{
    if (n < 1) return;
    get(n - 1);
    get(n - 3);
    printf("&d", n);
}

void main()
{
    get(6);
}

// Total: 25 calls
*/

///////////// RECURSION (SOLVED PROBLEM 2) ///////////////////

// Determine, how many number of times the star will be printed on the screen:
/*
#include <stdio.h>

void fun1(int n)
{
    int i = 0;
    if (n > 1)
        fun1(n - 1);
    for (i = 0; i < n; i++)
        printf(" * ");
}

void main()
{
    fun1(n);
}

// Answer: n(n+1)/2
*/

///////////// RECURSION (SOLVED PROBLEM 3) ///////////////////

// Consider the C function given below:
/*
#include <stdio.h>

int f(int j)
{
    static int i = 50;
    int k;
    if (i == j)
    {
        printf("Something");
        k = f(i);
        return 0;
    }
    else return 0;
}
*/
// Answer: The function will exhaust the runtime stack or run into an infinite loop when j=50.

///////////// RECURSION (SOLVED PROBLEM 4) ///////////////////

// Consider the C function given below:
/*
int fun(int n)
{
    int x = 1, k;
    if (n == 1) return x;
    for (k = 1; k < n; ++k)
        x = x + fun(k) * fun(n - k);
    return x;
}

int main()
{
    printf("%d", fun(5));
}
*/
// Output: 51
// fun(5) = 1 + fun(1) * fun(4) + fun(2) * fun(3) + fun(3) * fun(2) + fun(4) * fun(1);
// = 1 + 2*[fun(1) * fun(4) + fun(2) * fun(3)]
// because of repitation
// As fun(1) is equal to 1 we can say:
// = 1 + 2*[fun(4) + fun(2) * fun(3)]
// fun(2) = 1 + fun(1) * fun(1) = 1 + 1 = 2
// fun(3) = 1 + fun(1) * fun(2) + fun(2) * fun(1) = 1 + 2 + 2 = 5
// fun(4) = 1 + fun(1) * fun(3) + fun(2) * fun(2) + fun(3) * fun(1) = 1 + 5 + 4 + 5 = 15
// fun(5) = 1 + 2*[15 + 2 * 5]


///////////// RECURSION (SOLVED PROBLEM 5) ///////////////////
// What will be the output of the following C program?
/*
#include <stdio.h>

void count(int n)
{
    static int d = 1;
    printf("%d ", n);
    printf("%d ", d);
    d++;
    if (n > 1) count(n - 1);
    printf("%d ", d);
}
int main()
{
    count(3);
}

// Output: 3 1 2 2 1 3 4 4 4

*/


///////////// C Programming (Rapid Fire Quiz-2)/////////////////
// Q1:Which of the following statement is true about static functions in C?
// A: Static functions are restricted to the files where they are declared.

// Q2: State True or False. In C, it is mandatory to declare a function before use?
// A: False, Function declaration is optional.

// Q3: Which keyword is used to come out of loop only for that iteration?
// A: continue.

// Q4: Which of the following ways to write a function prototype is correct?
// A: i. int fun(int var1, int var2) ii. int fun(int, int).

// Q5: Is this statement correct? C supports dynamic scoping
// A: No.

// Q6: In C, parameters are always
// A: Passed by value. Parameters are always passed by value. Pass by reference is simulated in C by explicitly passing pointer values.

// Q7: In C, what is the meaning of the following function prototype with empty parameter list? void fun();
// A: Function can be called with any number of parameters of any type.

// Q8: Assuming int size is 4 bytes. What is going to happen when the following program runs?
/*
#include <stdio.h>
int main(){
    printf("Hi!\n");
main();
    return 0;
}
*/
// A: Hi! Would be printed until stack overflow happens for this program.

// Q9: In the context of "break" and "continue" statement in C, pick the best statement.
// A: "break" and "continue" can be used in "for", "while", "do-while" loop body. But only "break" can be used in "switch" body.
// As per C standard, "continue" can only be used in loop body.

// Q10: Determine the output of the following program?
/*
int main()
{
    int i = 9;
    for (;i;)
    {
        printf("Hmmm...");
        i--;
    }
}
*/
// A: Hmmm... will be printed 9 times































































































