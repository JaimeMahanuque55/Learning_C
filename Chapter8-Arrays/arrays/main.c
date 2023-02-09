////////////// DEFINITION OF ARRAY ///////////
///////////// Outline

// 1. Definition of Array
// 2. Understanding the definition of Array
// 3. Introduction to One dimensional Array


////////////////Definition of Array
// An Array is a data structure containing a number of data values (all of which are of same type)
/////// What is Data Structure?
// Data Structure is a format for organizing and storing data.
// Also, each data structure is designed to organize data to suit a specific purpose.

//////////// One dimensional Array
// The simples form of array one can imagine is one dimensional array.

//////////////// DECLARATION OF ARRAYS ///////////////////////
/////////////// Outline
// 1. How to declare and define one dimensional array?
// 2. How to access the array elements?
// 3. How to initialize one dimensional array?

/////////// Declaration and definition of 1D Array

// syntax: data_type name of the array[no. of elements];
// For example: an array of integers can be declared as follows: int arr[5];
// Compiler will allocate a contiguous block of memory of sizes = 5*sizeof(int)

// Can we specify the length of array as 5.697? OR Can it be of type other than integer?
// A: No, you can not.

// The length of an array can be specified by any positive integer constant expression.
// int arr[5]; int arr[5+5]; int arr[5*3]; int a; int arr[a = 21/3];

// Length of an array can not be negative: int arr[-5]; is wrong

////////// BEST PRACTICE
// Specifying the length of an array using macro is considered to be an excellent practice

////////////// ACCESSING ARRAY ELEMENTS ////////////////////////

// To access an array element, just write:
// array_name[index]


// Specifying the length of an array using macro is considered to be an excellent practice
// example without macro
/*
#include <stdio.h>

int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
       printf("Enter the input for index %d: ", i);
       scanf("%d", &a[i]);
    }

   printf("\nArray elements are as follows:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
  return 0;
}
*/

//Example With macro
/*

#include <stdio.h>
#define N 10

int main()
{
    int a[N], i;
    for (i = 0; i < N; i++)
    {
        printf("Enter the input for index %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArray elements are as follows:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
  return 0;

}
*/

////////////// INITIALIZNG AN ARRAY ////////////////////////

///////////// Initializing 1D Array
// Method 1: arr[5] = {1, 2, 3, 4, 5};
// Method 2: arr[] = {1, 2, 4, 5, 5}; // Not necessary to specify the length, and preferred method
// Method 3: Not preferred method
// int arr[5];
// arr[0] = 1;
// arr[1] = 2;
// arr[2] = 3;
// arr[3] = 4;
// arr[4] = 5;
// Method 4:
//int arr[5];
//for (i = 0; i < 5; i++){
//    scanf("%d", &arr[i]);
//}


// Question: What if number of elements are lesser than the length specified?
// Answer: The remaining locations of the array are filled by value 0.

/////////// A SMALL TIP
// instead of this
//int arr[10];
//for (i = 0; i < 10; i++)
//{
//    arr[i] = 0;
//}

// Do this
// int arr[10] = {0};

//Why not int arr[10] = {};? A: Because, this is illegal.
// You must have to specify at least 1 element. It cannot be completely empty.
// And it is also illegal to add more elements than the length of an array.


/////////////// SUMMARY
// If the number of elements are lesser than the length of the array then the rest of the locations are automatically filled by value 0.
//  Easy way to initialize an array with all zeros is given by: int arr[10] = {0};
// At the time of initialization, never leave these flower brackets {} empty and also never exceed the limit of number of elements specified by the length of an array.


//////////////// DESIGNATED INITIALIZATION OF ARRAYS ////////////////////////

// int arr[10] = {[0] = 1, [5] = 2, [6] = 3};
// This way of initialization is called designated initialization.
// And each number in the square brackets is said to be a designator.

/////////////// ADVANTAGES
// 1. No need to bother about the entries containing zeros.
// 2. No need to bother about the order at all.

////////////// BE CAREFUL
// If the length of an array is 'n', then each designator must be between 0 and n-1.

///////////// WHAT IF I WON'T MENTION THE LENGTH?
// * Designators could be any non-negative integer.
// * Compiler will deduce the length of the array from the largest designator in the list.

// But, if there is a clash, then designated initializer will win.


///////////// Arrays in C (Solved Problem 1) ////////////////////

// Q. Write a program to print the following numbers in reverse order:
// 34 56 54 32 67 89 90 32 21
// Assume that all these numbers are stored in an array.
/*
#include <stdio.h>

int main()
{
    int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int i;

    // Original order
    for (i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 8; i >= 0; i--){
        printf("%d ", a[i]);
    }
}
*/


///////////// Arrays in C (Solved Problem 2) ////////////////////
// Q. WAP to check whether any of the digits in a number appears more than once:
// Example: Input: 67827 Output: Yes
/*
#include <stdio.h>

int main()
{
    int seen[10] = {0};
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    int rem;
    while (N > 0)
    {
        rem = N % 10;
        if (seen[rem] == 1)
            break;
        seen[rem] = 1;
        N = N / 10;
    }
    if (N > 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
*/

///////////////////// Count Array Elements using sizeof() Operator ////////////////////

// syntax sizeof(name_of_arr) / sizeof(name_of_arr[0])

//////////////////// sizeof(name_of_arr)
// int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// sizeof(a);
// There are total 10 integers
// Assume that each integer requires 4 bytes
// sizeof(a) = 4 x 10 = 40 bytes

//////////////////// sizeof(name_of_arr[0])
// int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// sizeof(a[0]); sizeof(a[0]) = 4 bytes

// So we can say: sizeof(a) / sizeof(a[0]) = 40 / 4 = 10 - Number of elements

// size of 1 array element x number of elements = size of whole array.
// number of elements = size of whole array / size of 1 array element

// code example:
/*
#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d", sizeof(a) / sizeof(a[0]));
}
*/

////////////// Introduction to Multidimensional Arrays ////////////////////

///////////// Definition And Syntax
// Multidimensional arrays can be defined as an array of arrays

// General form of declaring N-dimensional array is as follows:
// data_type name_of_array[size1][size2]...[sizeN];
// For example: int a[3][4]; // Two Dimensional Array
// For example: int a[3][4][6]; // Three Dimensional Array

////////////////// Size Calculation
// Size of multidimensional array can be calculated by multiplying the size of all the dimensions.
// For example:
// size of a[10][20] = 10 x 20 = 200
// size of by bytes  = 200 x 4 = 800 bytes  // 4 is size of 1 element

//////////////// Introduction to Two-Dimensional (2D) Arrays ///////////////////

/////////////// Syntax
// The basic form of declaring two dimensional arrays is:
// data_type name_of_array[x][y]; // Where x and y are representing the size of the array


//////////// Visualizing two dimensional array
// Recall that a multidimensional array is an array of arrays

// int arr[4][5]; ->[4] number of rows and [5] number of columns

/////////// How to initialize two dimensional array?

// Method 1:
// int a[2][3] = {1, 2, 3, 4, 5, 6};

// Method 2:
// int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
//                  row 1        row 2

/////////// How to access 2D array elements?

// Using row index and column index

////////// How to print 2D array elements?

// 1D array elements can be printed using single for loop
// example:
//int a[5] = {1, 2, 3, 4, 5};
//
//for (i = 0; i < 5; i++)
//{
//    printf("%d ", a[i]);
//}


// 2D array elements can be printed using two nested for loops.

//int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
//
//for (i = 0; i < 2; i++)
//{
//    for(j = 0; j < 3; j++)
//    {
//        printf("%d ", a[i][j]);
//    }
//}

////////////// What we have learned so far?

// 1. How to declare and define two dimensional array.
// 2. How to visualize two dimensional array.
// 3. How to initialize two dimensional array.
// 4. How to access two dimensional array elements.
// 5. How to print two dimensional array elements.


///////////////// Introduction to Three-Dimensional (3D) Arrays ///////////////////

////////////// Visualizing Three dimensional array
// int arr[2][3][3] -> Means 2 arrays of 3 rows and 3 columns


///////////// Accessing the 3D Array elements

// int arr[2][3][3]
// I want to access the element in the 1st row and 3rd column of the 1st 2D array.
// arr[0][0][2]

////////////// Initializing 3D Array

// Method 1:
// int a[2][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

// Method 2: Better method
// int a[2][2][3] = { { {1, 2, 3}, {4, 5, 6} }, { {7, 8, 9}, {10, 11, 12} } }

////////////// Printing the elements of 3D Array
// 3D array elements can be printed using three nested for loops.

//int a[2][2][3] = { { {1, 2, 3}, {4, 5, 6} }, { {7, 8, 9}, {10, 11, 12} } }

//for (i = 0; i < 2; i++)
//{
//    for (j = 0; j < 2; j++)
//    {
//       for (k = 0; k < 3; k++)
//       {
//           printf("%d ", a[i][j][k]);
//       }
//    }
//}

//////////////// Multidimensional Arrays (Solved Problem) //////////////

//WAP that reads 5 x 5 array of integers and then prints the row sum and the column sum:
// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0

// Row total: 30 27 40 36 28
// Column total: 34 37 37 32 21

//code
/*
#include <stdio.h>

int main()
{
    int a[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}
        };

    int i, j;
    int sum  = 0;

    //Row sum
    printf("Row total: ");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }
        printf(" %d", sum);
        sum = 0;
    }

    printf("\nColumn total: ");

    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5; i++)
        {
            sum += a[i][j];
        }
        printf(" %d", sum);
        sum = 0;
    }
    return 0;

}
*/


/////////////////////// C Program for Matrix Multiplication //////////////////////////
////////////////////// IMPORTANT POINT
// * In order to multiply two matrices, #columns of 1st matrix = #rows of 2nd matrix;
///// Therefore, it is mandatory to have no. of columns of 1st matrix to be equal to no. of rows of 2nd matrix

// * Also, size of the resultant matrix depends on #rows of 1st matrix and #columns of 2nd matrix

#include <stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;

    //Part 1
    printf("Enter the rows and columns of the matrix a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements of matrix a:\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix b: ");
    scanf("%d %d", &brows, &bcolumns);

    if (brows != acolumns)
    {
        printf("Sorry! We cannot multiply the matrices a and b");
    }
    else
    {
        printf("Enter the elements of matrix b:\n");
        for (i = 0; i < brows; i++)
        {
            for (j = 0; j < bcolumns; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }

    printf("\n");

    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            for ( k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }


    // Printing the array elements
    printf("Resultant matrix\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}




































































