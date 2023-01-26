// Basic Output Function - printf
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int two = 2, three = 3, six = 6;
    int result = (two + three) * six / three;
    printf("I am new to programming but I know how to write arithmetic expressions like this: (%d + %d) * %d / %d ", two, three, six, three);
    printf("and the result of this expression is: %d", result);
}
*/

/* Fundamental Data Types - Integer */

// Long and Short

// size(short) <= sizeof(int) <= sizeof(long)

// Note: by default int some_variable_name; is signed integer variable
// Unsigned int name_variable; allows only positive values.

// #include <stdio.h>

// int main()
// {
//     printf("%d", sizeof(long int));
// }

// programming examples
// signed intenger

/*
#include <stdio.h>
#include <limits.h>

int main()
{
    int var1 = INT_MIN;
    int var2 = INT_MAX;

    printf("range of signed integer is from: %d to %d", var1, var2);
    return 0;
}*/

// unsigned integer
/*
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int var1 = 0;
    unsigned int var2 = UINT_MAX;

    printf("range of unsigned integer is from: %u to %u", var1, var2);
    return 0;
}
*/

// short signed integer
/*
#include <stdio.h>
#include <limits.h>

int main()
{
    short int var1 = SHRT_MIN;
    short int var2 = SHRT_MAX;

    printf("range of short signed integer is from: %d to %d", var1, var2);
    return 0;
}
*/

// short unsigned integer
/*
#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned short int var1 = 0;
    unsigned short int var2 = USHRT_MAX;

    printf("range of short signed integer is from: %u to %u", var1, var2);
    return 0;
}
*/

////////////////////// SUMMARY ////////////////////
// 1. sizeof(short) <= sizeof(int) <= sizeof(long).
// 2. Writing signed int some_variable_name; is equivalent to writing int some_variable_name;
// 3. %d is used to print "signed integer".
// 3. %u is used to print "unsigned integer".
// 5. %ld is used to print "long integer" equivalent to "signed long integer".
// 6. %lu is used to print "unsigned long integer".
// 7. %lld is used to print "long long integer".
// 8. %llu is used to print "unsigned long long integer".

/////////////////////// EXCEEDING THE VALID RANGE OF DATA TYPES /////////////

// Outline

// 1. Exceeding the unsigned range
// Programming example
/*

*/

// 2. Exceeding the signed range
/*
#include <stdio.h>

int main()
{
    int var = -2147483649;
    printf("%d", var);
}
*/

///////////////// FUNDAMENTAL DATA TYPES - CHARACTER /////////////////

/////////////// OUTLINE

// 1. Brief overview on character data type.
// 2. Size of characters.
// 3. Range of characters.
// 4. Difference between signed and unsigned characters.

// Size and Range of character

// SIZE - 1 byte = 8 bits;
// RANGE - Unsigned: 0 to 255, and Signed: -128 to +127

// programming examples
/*
#include <stdio.h>

int main()
{
    char var = 65;
    printf("%c", var);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    char var = -127;
    printf("%c", var);
    return 0;
}
*/

//////////////// Summary //////////////
// 1. Size of character = 1 byte;
// 2. Signed character range: -128 to +127;
// 3. Unsigned character range: 0 to 255;
// 4. Negative values won't buy you any additional powers;
// 5. In traditional ASCII table, each character requires 7 bits;
// 6. In extended ASCII table, eache character utilize all 8 bits.

//////////// FUNDAMENTAL DATA TYPES - FLOAT, DOUBLE AND LONG DOUBLE /////////

//////////// Outline

// 1. Float, double, long double - size and difference between them.
// 2. Brief introduction to fixed and folating point.
// 3. Coding examples.

// Why Three Different Data Types

// Programming examples
/*
#include <stdio.h>
int main()
{
    float var1 = 3.145926535897932;
    double var2 = 3.145926535897932;
    long double var3 = 3.141592653589793213456;

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", var3);
}
*/

/*
#include <stdio.h>

int main()
{
    int var = 4 / 9;
    printf("%d\n", var);

    float var1 = 4 / 9;
    printf("%.2f\n", var1);

    float var2 = 4.0 / 9.0;
    printf("%.2f\n", var2);
}
*/

///////////////// IMPORTANT QUESTIONS SET 1 /////////////

// Q1: What is the output of the following C program fragment:
/*
#include <stdio.h>

int main()
{
    printf("%d", printf("%s", "Hello World!"));
    return 0;
}
*/
// * % is used to print "string of characters."
// * Printf not only prints content on the screen. It also returns the number of characters that successfully prints on the screen.

// Q2: what is the output of the following C program fragment:
/*
#include <stdio.h>
int main()
{
    printf("%s\n", "Hello");
    printf("%10s", "Hello");
    return 0;
}
*/

// the number before s means that the string will be printend after 10 white spaces

// Q2: what is the output of the following C program fragment:
/*
#include <stdio.h>

int main()
{
    char c = 255;
    c = c + 10;
    printf("%d", c);
    return 0;
}
*/

// prints 9

// Q5: what does the following program fragment prints:
/*
#include <stdio.h>
int main()
{
    unsigned i = 1;
    int j = -4;
    printf("%u", i + j);
    return 0;
}

// Intenger value depends from machine to machine
*/

////////////////// SCOPE OF VARIABLES - LOCAL VS GLOBAL //////
///////////////// Outline
// 1. Definning Scope fo a variable.
// 2. Local Variable.
// 3. Global Variable.

//////////////// 1. DEFINING SCOPE

// Scope = Liftime

// The area under which a variable is applicable or alive.

// STRICT DEFINITION: a block or a region where a variable is declared, defined and used and when a block or a region ends, variable automatically destroyed.

////////////// 2. Local variable

// Programming example
/*
#include <stdio.h>

int main()
{
    int var = 34; // Scope of this variable is within main() funtion only. Therefore called Local to main() function
    printf("%d", var);
    return 0;
}

int fun()
{
    printf("%d", var); // Trying to access variable 'var' outside main() function
}

*/
/*
#include <stdio.h>

int main()
{
    int var = 3;
    {
        int var = 4; // here i can define the variable with the same name because the other variable isn't on the same block of code
        printf("%d\n", var);
    }
    printf("%d", var);
    return 0;
}
*/

/////////////// 3. Global Variable
/*
#include <stdio.h>
int fun();

int var = 10; // This variable is outside of all functions therefore called a GLOBAL variable

int main()
{
    int var = 3;
    printf("%d\n", var);
    fun();
    return 0;
}

int fun()
{
    printf("%d", var);
}
*/

///////////////// VARIABLE MODIFIERS - AUTO AND EXTERN////////////////////

/////////////// What is Auto Modifier

// Auto means Automatic
// Variables declared inside a scope by default are automatic variables

// Syntax:  auto int some_variable_name;

//////////// Take Aways
// 1. If you won't initialize auto variable, by default it will be initialized with some garbage (random) value
// Code example
/*
#include <stdio.h>

int main()
{
    auto int var;
    printf("%d", var);
    return 0;
}
*/

// 2. On the other hand, global variable by default initialized to 0.
// code example
/*
#include <stdio.h>

int var;
int main()
{
    printf("%d", var);
    return 0;
}
*/

////////// Extern Modifier

// int var; : Declaration and Definition
// extern int var; : Declaration only

// Multiple declarations are allowed but multiple definitions are not allowed

// - Extern is short name for external.
// - Used when a particular file needs to access a variable from another file.

// code example
/*
#include <stdio.h>

extern int a;
extern int a;
extern int a;
int main()
{
    printf("%d", a);
    return 0;
}
*/
// code example 2
/*
#include <stdio.h>

int a = 9;
int main()
{
    extern int a;
    printf("%d", a);
    return 0;
}
*/

// code example 3
/*
#include <stdio.h>

extern int a = 9;
int main()
{
    printf("%d", a);
    return 0;
}
*/
/////////////////// Take Aways

// 1. When we write extern some_data_type some_variable_name; no memory is allocated. Only property of variable is announced.
// 2. Multiple declarations of extern variable is allowed within the file. This is not the case with automatic variables.
// 3. Extern variables says to compiler "go outside from my scope and you will find the definition of the variable that i declared".
// 4. Compiler believes that whatever the extern variable said is true and produce no error. Linker throws an error when he finds no such variable exist.
// 5. When an extern variable is initialized, then memory for this variable is allocated and it will be considered defined.

//////////////////// VARIABLE MODIFIERS - REGISTER //////////////////

// Syntax: register some_data_type some_variable_name

////////////// What is Register Modifier?

// code exemple
/*
#include <stdio.h>

int main()
{
    register int var;
    return 0;
}
*/

// Register Keyword hints the compiler to store a variable in register memory.

// This is done because access time reduces greatly for most frequently referred variables

// This is the choice of compiler whether it puts the given variable in register or not

// Usually compiler themselves do the necessary optimizations

/////////////////// VARIABLE MODIFIERS - STATIC /////////////////////
/*
#include <stdio.h>
#include <stdlib.h>

// extern int count;
int main()
{
    int value;
    value = increment();
    value = increment();
    value = increment();
    // count = count + 3;
    // value = count;

    printf("%d", value);
    return 0;
}
*/
/////////////////// Takeaways

// 1. Static variable remains in memory even if it is declared within a block on the other hand automatic variable is destroyed after the completion of function in which it was declared.
// 2. Static variable if declared outside the scope of any function will act like global variable but only within the file in which it is declared.
// 3. You can only assign a constant literal (or value) to a static variable.

/////////////////// CONSTANTS IN C (PART 1) ////////////////////////

//////////////// What is constant?
// As the name suggests - something that never change

// Once defined cannot be modified later in the code

// DEFINING CONSTANTS
// - using #define or using const

/////////////////////// USING #DEFINE
//  Syntax:      #define NAME value    - NAME is also called Macro
//  Job of preprocessor (not compiler) to replace NAME with value

// Code example
/*
#include <stdio.h>
#define PI 3.14159 // PI is the NAME and 3.14159 is the value

int main()
{
    printf("%.5f", PI);
    return 0;
}
*/

//////////// Take aways
// 1. Please don't add semicolon at the end.
// 2. Choosing capital letters for NAME is good practice
// 3. Whatever inside double quotes "" won't get replaced.
// 4. We can use macros like functions.
///// code example
/*#include <stdio.h>
#define add(x, y) x + y

int main()
{
    printf("addition of two numbers: %d", add(4, 3));
    return 0;
}
*/
// 5. We can write multiple lines using \
///// Code example
/*
#include <stdio.h>
#define greater(x, y)                          \
    if (x > y)                                 \
        printf("%d is greater than %d", x, y); \
    else                                       \
        printf("%d is lesser than %d", x, y);
int main()
{
    greater(7, 6);
    return 0;
}
*/
// 6. First expansion then evalution
///// Code example
/*
#include <stdio.h>
#define add(x, y) x + y

int main()
{
    printf("result of expression a * b + c is: %d", 5 * add(4, 3));
    return 0;
}
*/
// the print of this code is 23, because we multiply 5 with 4 then we add 3.

// 7. Some predefined macros like __DATE__, __TIME__ can print current date and time.
////// Code example
/*
#include <stdio.h>

int main()
{
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}
*/

/////////////////// CONSTANTS IN C (PART 2) ////////////////////////

/////////////////////// USING CONST

// Syntax: const some_data_type some_variable_name

// Code example
/*
#include <stdio.h>

int main()
{
    const int var = 67;
    // var = 56; // it is wrong because the variable was defined as a constant
    printf("%d", var);
}
*/

///////////// PROGRAMING (IMPORTANT QUESTIONS SET 2) //////////////////

// Q1: What is the output of the following C program?
/*
#include <stdio.h>

int main()
{
    int var = 052;     // here we defined a octal value
    printf("%d", var); // Here we a trying to print a decimal value.
    return 0;
}
*/

// The output is 42 - When we place 0 in front of any value, that value is treated as an octal value and not a decimal value.

// Q2: What is the output of the following C program?
/*
#include <stdio.h>

int main()
{
    int var = 052;
    printf("%o", var); // Trying to print octal value
    return 0;
}
*/
// Output 52.

// Q3: What is the output of the following C program?
/*
#include <stdio.h>

#define STRING "%s\n"
#define NESO "Welcome to Neso Academy!"

int main()
{
    printf(STRING, NESO);
    return 0;
}
*/
// Output is Welcome to Neso Academy!

/////////////////// BASIC INPUT FUNCTION - scanf //////////////////////

///////////// What is scanf?
// Stands for Scan Formatted string

// Accept character, string and numeric data from the user using standard input - Keyboard.

// Scanf also use format specifiers like printf.
// for example: %d to accept input of integer type.
//%c to accept input of character type.
//%s to accept a string
// and so on..

// Example
// int var;
// scanf("%d", &var); // Don't forget to add & in front of variable name.

////////////// Why &?

// While scanning the input, scanf needs to store that input data somewhere.
// To store this input data, scanf needs to know the memory location of a variable.
// & is also called as address-of operator.
// &var == Address of var.

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
    printf("%d + %d = %d", a, b, a + b);
    return 0;
}
*/

///////////// PROGRAMING (IMPORTANT QUESTIONS SET 3) //////////////////

// Q1: What is the output of the following C program fragment:
/*
#include <stdio.h>

int main()
{
    int var = 0x43FF;  // when we put 0x in front of any value, then that value is treated as an hexadecimal value
    printf("%x", var); // Now the format specifier for hexadecimal is %x.
    return 0;
}
*/
// 0x or 0X both are same. You can use any.

// Q2: What is the output of the following C program fragment:

#include <stdio.h>

static int i;
static int i = 27;
static int i;
int main()
{
    static int i;
    printf("%d", i);
    return 0;
}

// Output is 0;