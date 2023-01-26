// What is Floyd's triangle?

// Floyd's Triangle (named after a computer scientist - Robert W. Floyd) is a right-angle triangular array of natural numbers. It is filled by natural numbers consecutively starting with 1 in the top left corner.

// code
#include <stdio.h>

int main()
{
    int i, j, rows, n = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}