// write a program to find the area of the rectangular garden provided that length of the rectangular garden is 15 meteres and breath is 10 meters
/*
#include <stdio.h>

int main()
{
    int l;
    int w;
    printf("Enter the length\n");
    scanf("%d", &l);
    printf("Enter the width\n");
    scanf("%d", &w);
    printf("The area of the rectangular is %d", l*w);
    return 0;
}
*/

//////////////// INTRODUCTION OF OPERATORS IN C /////////////

// Arithmetic operators: +, -, *, /, %;
// Increment/Decrement operators: ++, --;
// Relational Operators: ==, ! =, < =, > =, < , >;
// Logical operators: && , || , !;
// Bitwise operators: &, ^, |, ~, >>, <<;
// Assignment operators: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=;
// Other operators: ?:, &, *, sizeof() ,

//////////////// ARITHMETIC OPERATORS //////////////////

////////////// Arithmetic operators
// + : addiction;
// - : Subtraction;
// * : Multiplication;
// / : Division;
// % : Modulus.

// All are binary operators -> means two operands are required to perfome operation
// Code example
/*
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("a / b = %d\n", a / b);
    printf("a %% b = %d", a % b);
    return 0;
}
*/

/////////// Operator precedence and Associativity

// Precedence: Highest -> *, /, %  | Associativity: Left to Right
// Precedence: Lowest -> +,  -     | Associativity: Left to Right

// Note: Associativity is used only when two or more operators are of same precedence.
// Code example
/*
#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 4, d = 5;
    printf("a * b / c = %d\n", a * b / c);                // output is 1
    printf("a + b - c = %d\n", a + b - c);                // output is 1
    printf("a + b * d - c %% a = %d", a + b * d - c % a); // output is 17
    return 0;
}
*/

////////////// INCREMENT AND DECREMENT OPERATORS IN C (PART 1) //////////////////

//////////// What are increment and decrement operators?

// Increment operator is used to increment the value of a varible by one. Similarly, decrement operator is used to decrement the value of a variable by one.
// examples
// Increment                       |     Decrement
// int a = 5;                      |     int a = 5;
// a++;                            |     a--;
// a = 6                           |     a = 4
// a++; is same as a = a + 1;      |     a--; is same as a = a - 1;

// Both are unary operators.
// - because they are applied on single operand
// example: a++; -> correct    |   a ++ a; -> incorrect

/////////////// Increment and Decrement operators

// Pre-increment                   |       Post-increment operator
// ++a;                            |               a++;
// ++ is applied before operand    |       ++ is applied after the operand

// pre-decrement operator          |       post-decrement operator
// --a;                            |               a--;
// -- is applied before operand    |       -- is applied after the operand

// You cannot use rvalue before or after increment/decrement operator.
///// example: (a + b)++; error!   |        ++(a + b); error!

// lvalue (leftvalue): simply means an object that has an identifiable location in memory (i.e. having an address).

//// - In any assignment statment "lvalue" must have the capability to hold the data;
//// - lvalue must be a variable because they have the capability to store the data;
//// - lvalue cannot be a function, expression (like a+b) or constant (like 3,4 etc).

// rvalue(right value): simply means an object that has no identifiable location in memory.
//// - Anything which is capable of returning a constant expression or value.
//// - Expression like a+b will return some constant value.
/////// example
////// a++; do it                   | (a+b)++;           // u cannot do it is wrong
/////  a = a + 1;                   | (a+b) = (a+b) + 1;

// Question: What is the diference between pre-increment and post-increment operator OR pre-decrement and post-decrement operator?

//// pre - means first increment/decrement then assign to another variable.
//// post - means first assign it to another variable then increment/decrement.

// example 2: x = ++a;
//          supose a receives 5 and after pre-incre the result will be x = 6;
// example 2: x = a++;
//          supose a = receives 5 and after post-incr the resulte will be x = 5 and a = 6

////////////// INCREMENT AND DECREMENT OPERATORS IN C (PART 2) //////////////////

// Q1: What is the output of the following C program fragment:
/*
#include <stdio.h>

int main()
{
    int a = 4, b = 3;
    printf("%d\n", a++ + b);
    // printf("%d", a);
    return 0;
}
*/
// Output is 7;

////////////// RECAP
// Post increment/decrement in context of equation:
//// First use the value in the equation and then increment the value;
// Pre increment/decrement in context of equation:
//// First increment the value and then use in the equation after completion of the equation

///////////////// Token Generation

// * Lexical analysis is the first phase in the compilation process;
// * Lexical analyzer (scanner) scans the whole source program and when it finds the meaningful sequence of characters (lexemes) then it converts it into a token;
// * Token: lexemes mapped into token-name and attribute-value.
// Example: int -> <keyword, int>
// It always matches the longest character sequence

// Q2: What is the output of the following C program fragment:
/*
#include <stdio.h>

int main()
{
    int a = 4, b = 3;
    printf("%d", a + ++b);
    return 0;
}
*/
// Output is 8.

// Q3: What is the output of the following C program fragment:
/*
#include <stdio.h>

int main()
{
    int a = 4, b = 3;
    printf("%d", a++ + ++b);
    return 0;
}
*/
// Output is 8.

/////////////// RELATIONAL OPERATORS IN C ////////////////////

// == -> equal to;
// != -> not equal to;
// <= -> less than or equal to;
// >= -> greater than or equal to;
// <  -> less than;
// >  -> greater than;

///////// Used for comparing two values

// All Relational operators will return either True of False.

// code example
/*
#include <stdio.h>

int main()
{
    int a = 300, b = 2090;

    if (b >= a)
    {
        printf("Bingo! You are in");
    }
    else
    {
        printf("OOPS! You are out");
    }

    return 0;
}
*/

/////////////// LOGICAL OPERATORS IN C ////////////////

// && -> AND;
// || -> OR;
// !  -> NOT;

// && and || are used to combine two conditions.
//// && - returns TRUE when all the conditions under consideration are true and return FALSE when any one or more than condition is false.
//// code example
/*
#include <stdio.h>

int main()
{
    int a = 5;

    if (a == 5 && a != 6 && a <= 56 && a > 4)
    {
        printf("Wellcome to this beautiful world of operators");
    }
}
*/

//// || - returns TRUE when one or more than one condition under consideration is true and returns FALSE when all conditions are false.
//// code example
/*
#include <stdio.h>

int main()
{
    int a = 5;

    if (a != 5 || a == 6 || a >= 56 || a > 4)
    {
        printf("Wellcome to this beautiful world of operators");
    }
}
*/

// ! operator is used to complement the condition under consideration
//// ! - returns TRUE when condition is FALSE and returns FALSE when condition is TRUE.
//// Code example
/*
#include <stdio.h>

int main()
{
    int a = 5;

    if (!(a == 6))
    {
        printf("Wellcome to this beautiful world of operators");
    }
}
*/

///////// Concept of SHORT CIRCUIT IN LOGICAL operators

// Short circuit in case of &&: simply means if there is a condition anywhere in the expression that returns false, then rest of the conditions after that will not be evalueted.

// code exmple
/*
#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    int incr;

    incr = (a < b) && (b++);
    printf("%d\n", incr);
    printf("%d", b);
    return 0;
}
*/

// Short circuit in case of ||: simply means if there is a condition anywhere in the expression that returns True, then the rest of the conditions after that will not be evaluated.
//// code example
/*
#include <stdio.h>

int main()
{
    int a = 5, b = 3;
    int incr;

    incr = (a > b) || (b++);
    printf("%d\n", incr);
    printf("%d", b);
    return 0;
}
*/

//////////////// BITWISE OPERATORS IN C (PART 1)///////////////

///////////// OUTLINE
// 1. Introducing bitwise operators.
// 2. Bitwise OR, AND & NOT.
// 3. Difference betweem bitwise and logical operators.

/////////// Introduction to BITWISE operators

// As name suggests - it does bitwise manipulation

////////////// 6 cool operators
// &  -> AND;
// OR -> OR;
// ~  -> NOT;
// << -> LEFT SHIFT;
// >> -> RIGHT SHIFT;
// ^  -> XOR

////////////// Bitwise AND (&) operator
// It taks two bits at a time and perform AND operation;
// AND (&) is binary operator. It takes two numbers and perform bitwise AND;
// Result of AND is 1 when both bits are 1.

///////////// Bitwise OR (|) operator
// It taks two bits at a time and perform OR operation;
// OR (|) is binary operator. It takes two numbers and perform bitwise OR;
// Result of OR is 0 when both bits are 0.

///////////// Bitwise NOT (~) operator
// NOT is a unary operator;
// Its job is to complement each bit one by one;
// Result of NOT is 0 when bit is 1 and 1 when bit is 0.

///////////// Difference between Bitwise and Logical operators

// code example
/*
#include <stdio.h>

int main()
{
    char x = 1, y = 2; // = 1(0000 0001), y = 2(0000 0010)
    if (x & y)         // 1&2 = 0(0000 0000)
        printf("Result of x&y is 1");
    if (x && y) // 1&&2 = TRUE && TRUE = TRUE = 1
        printf("Result of x&&y is 1");

    return 0;
}
// output: Result of x&&y is 1
*/

//////////////// BITWISE OPERATORS IN C (PART 2) ///////////////

////////////// Left Shift operator

// First operand                <<          Second operand
// Whose bits get left shifted   |  Decides the number of places to shift the bits

///////////// Important Points
// 1. When bits are shifted left then trailing positions are filled with zeros.
// 2. Left shifting is equivalent to multiplication by 2^rightOperand

// code example
/*
#include <stdio.h>

int main()
{
    char var = 3; // Note: 3 in binary = 0000 0011
    printf("%d", var << 4);
    return 0;
}
*/
// output: 6.

// var = 3;
// var << 1         output: 6  [3 x 2^1]
// var << 4         output: 48 [3 x 2^4]

//////////////// BITWISE OPERATORS IN C (PART 3) ///////////////

////////////// Right Shift operator

// First operand                >>          Second operand
// Whose bits get right shifted   |  Decides the number of places to shift the bits

///////////// Important Points
// 1. When bits are shifted right then leading positions are filled with zeros.
// 2. Right shifting is equivalent to division by 2^rightOperand

// code example
/*
#include <stdio.h>

int main()
{
    char var = 3; // Note: 3 in binary = 0000 0011
    printf("%d", var >> 1);
    return 0;
}
*/
// output: 1.

// var = 3;
// var >> 1         output: 1  [3 / 2^1]

// var = 32;
// var >> 4          output: 2 [32 / 2^4]

//////////////// BITWISE OPERATORS IN C (PART 4) ///////////////

////////////// Bitwise XOR operator

// Exclusive OR

// Either A is 1 or B is 1 then the output is 1 but when both A and B are 1 then the output is 0.
// Excluding BOTH

// What is the output of the following program snippet?

/*
#include <stdio.h>

int main()
{
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After XOR, a = %d and b = %d", a, b);
    return 0;
}
*/
// After XOR, a = 3 and b = 4

////////////// ASSIGNMENT OPERATORS IN C /////////////

///////////// OUTLINE
// Introduction to assignment operator.
// Shorthand assignment operators.
// Homework problem

///////////// Assignement operator
// Values to a variable can be assigned using assignment operator
// Requires two values -L-value and R-value
// This operator copies R-value to L-value

////////// Shorthand Assignment operators
// += -> First addition then assignment; a += 1 == a = a+1
// -= -> First subtraction then assignment;
// *= -> First multiplication then assignment;
// /= -> First division then assignment;
// %= -> First modulus then assignment;
// <<= -> First bitwise left shift then assignment;
// >>= -> First bitwise left right then assignment;
// &= -> First bitwise AND then assignment;
// |= -> First bitwise OR then assignment;
// ^= -> First bitwise XOR then assignment;

// Assignemnt operator is having least procedence except the comma operator

/////////////// Homework problem
// What is the output of the following program segment?
/*
#include <stdio.h>

int main()
{
    char a = 7;
    a ^= 5;
    printf("%d", printf("%d", a += 3));
    return 0;
}
*/
// output: 51.

//////////////// CONDITIONAL OPERATOR IN C ///////////////

////////////// OUTLINE
// Introduction to conditional operator.
// Quick facts.
// Homework problem.

/////////// Introduction to conditional operator.

// Look and feel:       ? :

// exemple:
// char = result;
// int marks;
// result = (marks > 33) ? 'p' : 'f';

// (marks > 33) is a boolean expression, therefore it will return either TRUE or FALSE
// (marks > 33) ? 'p' : 'f' is a conditional expression, which is after all an expression, therefore it is an r-value and result is l-value.

//////////// Quick Facts Checklist
// Conditional operator is the only ternary operator available in the list of operators in C language;

// As in EXPRESSION1 ? EXPRESSION2 : EXPRESSION3, EXPRESSION1 is the boolean expression. If we simply write 0 instead of some boolean expression then that simply means FALSE and therefore EXPRESSION3 will get evalueated.
/////// example: int result;
//////////////// result = 0 ? 2 : 1     result = 1.

//////////////// Homework problem
// What is the output of the following C program fragment?
/*
#include <stdio.h>

int main()
{
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
    printf("%d", num);
    return 0;
}
*/
// output: 65, which is 'A' according ASCII table.

//////////////// COMMA OPERATOR IN C /////////////////////

//////// COMMA (,) OPERATOR

// 1. Comma operator can be used as a "separator";
// ex: int a = 3, b = 4, c = 8;
// 2. Comma operator can be used as an "operator"
// ex: int a = (3, 4, 8);
////// printf("%d", a); Output: 8
// Comma operator returns the rightmost operand in the expression and simply evaluates the rest of the operands and finally reject them.
// ex: int var = printf("%s\n", "Hello!"), 5);
////// printf("%d", var); Output: Hello!
////////////////////////////////  5
// 3. Comma operator is having least precedence among all the operators available in C language.

///////////// Homework problem
// What is the output of the following C program fragment?
/*
#include <stdio.h>

int main()
{
    int var;
    int num;

    num = (var = 15, var + 35);
    printf("%d", num);
    return 0;
}
*/
// Output: 50

////////////// PRECEDENCE AND ASSOCIATIVITY OF OPERATORS //////////////////

//////////////// Precedence of Operators

// Precedence of operators come into picture when an expression we need to decide which operator will be evalueted first. Operator with higher precedence will be evaluated firs.

////////////// Associativity of operators
// Assiciativity of operators come into picture when precedence of operators are same and we need to decide which operator will be evaluated first.

////////////////// () - paranthesis in function calls.
// example:     int var =fun();
// = operator is having less precedence as compared to () therefore, () belongs to fun and fun will be treated as a function
// it looks like:   int var =(fun());
// if suppose = operator is having greater precedence then, fun will belong to = operator and therefore it will be treated as a variable.
// it would looks like: int (var =fun)();

//////////// Member access operators (-> .)
// They are used to ACCESS MEMBERS OF STRUCTURES.

/////////// Postfix Increment/Decrement (++, --)

// Precedence of Postfix Increment/Decrement operator is greater than Prefix Increment/Decrement
// Associativity of Postfix is also diffrent from Prefix. Associativity of postfix operators is from left to right and that of prefix operators is from right to left.

///////////////// Important Facts
// Associativity can only help if there are two or more operators of same precedence and not when there is just one operator.
// Operators with same precedence have same associativity as well.

// code examples:
/*
#include <stdio.h>

int func1()
{
    printf("Neso");
    return 1;
}

int func2()
{
    printf("Academy");
    return 1;
}

int main()
{
    int a;
    a = func1() + func2();
    printf("%d", a);
    return 0;
}
*/
// Output: NesoAcademy or AcademyNeso

// Which function is called first? func1() or func2()?

// It is not defined wether func1() will be called first or whether func2() will be called. Behaviour is undefined and output is compiler dependent.

// NOTE: Here associativity will not come into picture as we have just one operator and which function will be called first is undefined. Associativity will only work when we have more than one operator of same precedence.

///////////// Homework Problem

// What is the output of the following C program fragment?
/*
#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    if (a <= b == d > c)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}
*/
// Output: TRUE.

////////////// OPERATORS IN C (SOLVED PROBLEM 1) ////////////////

// What is the output of the following C program fragment? Assume size of integer is 4 bytes.
/*
#include <stdio.h>

int main()
{
    int i = 5;
    int var = sizeof(i++);
    printf("%d %d", i, var);
    return 0;
}
*/
// output: 5 4.
// i++ inside sizeof is not evaluated

// C standard is the language specification which is adopted by all C compilers across the globle.

/////////// According to C99 standard:

// The sizeof operator yields the size (in bytes) of its operand, which may be an expression or a parenthesized name of a type. The size is determined from the type of the operand. If the type of the operand is a variable length array type, then the operand is evaluated; otherwise, the operand is not evaluated and the result is an integer constant.

////////////// OPERATORS IN C (SOLVED PROBLEM 2) ////////////////
// What is the output of the following C program fragment?
/*
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;

    printf("%d %d %d %d", d, c, b, a);
}
*/
// Output: 1 1 0 1.