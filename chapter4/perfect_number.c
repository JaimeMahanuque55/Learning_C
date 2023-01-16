// Perfect number is a positive integer that is equal to the sum of all its proper positive divisors excluding the number itself.

#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int i, rem, sum = 0;
    for (i = 1; i < number; i++)
    {
        rem = number % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("%d is a perfect number", number);
    else
        printf("%d is not a perfect number", number);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int number;
//     printf("Enter the number: ");
//     scanf("%d", &number);

//     int i, sum = 0;
//     for (i = 1; i < number; i++)
//     {
//         if (number % i == 0)
//         {
//             sum += i;
//         }
//     }
//     if (sum == number)
//         printf("%d is a perfect number", number);
//     else
//         printf("%d is not a perfect number", number);
//     return 0;
// }