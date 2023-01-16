// Prerequisite: Matrices

// Printing stars:
/*
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            printf("*");
        }
    }
}
*/

// Tips for printing the pyramid

// 3 rows -> 5 columns
// 4 rows -> 7 columns
// 5 rows -> 9 columns
// 6 rows -> 11 columns

// If n is number of rows, then 2n - 1 will be number of columns

// The pyramid

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("How many rows you want in your pyramid?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}