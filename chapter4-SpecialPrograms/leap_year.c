// What is a leap year?

// Leap year is a year having 366 days.
// The extra day is the 29th February.
// Leap year arrives after every four years.

// Note: Every year that is exactly divisible by 4 is a leap year, except the centurial year that is exactly divisible by 100. But these centurial years are leap years if they are exactly divisible by 400.

// #include <stdio.h>

// int main()
// {
//     int year;
//     printf("Enter the year: ");
//     scanf("%d", &year);

//     if (year % 400 == 0)
//     {
//         printf("%d is a leap year", year);
//     }
//     else if (year % 100 == 0)
//     {
//         printf("%d is not a leap year", year);
//     }
//     else if (year % 4 == 0)
//     {
//         printf("%d is a leap year", year);
//     }
//     else
//     {
//         printf("%d is not a leap year", year);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}