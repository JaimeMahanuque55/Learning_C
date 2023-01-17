//////// STATIC AND DYNAMIC SCOPING (PART 1) ///////////

// Stack is a container (or memory segment) which holds some data.
// Data is retrieved in Last In First Out (LIFO) fashion.
// Two operations: push and pop.

// Activation Record - is a portion of a stack which is generally composed of:
// 1. Locals of callee;
// 2. Return address to the caller;
// 3. Parameters of the callee.

//////// STATIC AND DYNAMIC SCOPING (PART 2) ///////////
////////// Why scoping?
// Scoping is necessary if you want to reuse variable names.

/////// What is static scoping?
// In Static scoping (or lexical scoping), definition of a variable is resolvved by searching its containing block or function. If that fails, then searching the outer block and so on.

// Static Scoping example:
/*
#include <stdio.h>

int fun1(int);
int fun2(int);
int a = 5;

int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}

int fun1(int b)
{
    b = b + 10;
    b = fun2(b);
    return b;
}

int fun2(int b)
{
    int c;
    c = a + b;
    return c;
}

// Output: 25
*/

//////// STATIC AND DYNAMIC SCOPING (PART 3) ///////////
/////// What is dynamic scoping?
// In dynamic scoping, definition of a variable is resolved by searching its containing block and if not found, then searching its calling function and if still not found then the function which called that calling function will be searched and so on.
/*
#include <stdio.h>

int fun1(int);
int fun2(int);
int a = 5;

int main()
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}

int fun1(int b)
{
    b = b + 10;
    b = fun2(b);
    return b;
}

int fun2(int b)
{
    int c;
    c = a + b;
    return c;
}
*/
// Output: 30

////////////// Homework problem //////////////////
// What will be the output of the following program snippet:
/*
#include <stdio.h>

int fun1();
void fun2();

int a, b;

void print()
{
    printf("%d %d", a, b);
}

int fun1()
{
    int a, c;
    a = 0;
    b = 1;
    c = 2;
    return c;
}

void fun2()
{
    int b;
    a = 3;
    b = 4;
    print();
}

int main()
{
    a = fun1();
    fun2();
}
*/
// output static scope: 3 1
// output dynamic scope: 3 4

//////// STATIC AND DYNAMIC SCOPING (PART 4) ///////////

////////////// Important Takeaways
// 1 . In most of the programming languages, static scoping is followed instead of dynamic scoping.
// 2. Languages, including Algol, Pascal, C, Haskell, Scheme etc. are statically scoped.
// 3. Some languages, including SNOBOL, APL, Lisp etc. are dynamically scoped.
// 4. As C follows static scoping therefore it is not possible to see programamatically, how dynamic scoping works in C.

//////// STATIC AND DYNAMIC SCOPING (SOLVED Q 2) ///////////
// What will be the output of the following pseudocode when parameters are passed by reference and dynamic scoping is assumed?
/*
#include <stdio.h>

a = 3;
void n(x)
{
    x = x * a;
    print(x);
}

void m(y)
{
    a = 1;
    a = y - a;
    n(a);
    print(a);
}

void main()
{
    m(a);
}
*/
// output: 4, 4