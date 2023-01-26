// Problem statement:
// WAP to check wether a number is an Armstrong number or not?

// What is an Armstrong number?
// Armstrong number: An Armstrong number of order n is a number in which each digit when multiplied by itself n number of times and finally added together, results the same number.

// Example: 371 is a digit number. Therefore, its order is 3
// Now here, each digit is multiplied by itself 3 times and finally added together and results in our original number.
// i.e. 3*3*3* + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371

// How to write a program which checks whether a number is an Armstrong number or not?

// Step #1 - First find out, how many digits are there in your number
// code to find the order of a number
// count = 0;                   1. 371/10 = 37
// while(q != 0)                    count = 1
//{                             2. 37/10 = 3
//    q = q/10;                     count = 2
//    count++;                  4. 3/10 = 0
//}                                 count = 3

// Step #2 - Multiply each digit n times (in our example, n = 3) and add them
// code to multiply each digit

// cnt = count, result = 0;             1. 371%10 = 1
// while (q != 0)                           mul = 1
//{                                         result = 1
//   rem = q%10;                        2. 37%10 = 7
//   while (cnt != 0)                       mul = 7*7*7 = 343
//   {                                      result = 1 + 343
//      mul = mul * rem;                           = 344
//      cnt--;
//   }                                  3. 3%10 = 3
//   result = result + mul;                 mul = 3*3*3 = 27
//   cnt = count;                           result = 344 + 27
//   q = q/10;                                     = 371
//   mul = 1;
//}

// Step #3 - Check whether the calculated result is equal to the actual number or not.

// logic
// if (result == number)
//        printf("%d is an Armstrong number", number);
//  else
//        printf("d% is not an Armstrong number", number);

// code
#include <stdio.h>

int main()
{
    int number, count = 0, result = 0, mul = 1, cnt, rem;
    printf("Please enter a number: ");
    scanf("%d", &number);

    int q = number;
    while (q != 0)
    {
        q = q / 10;
        count++;
    }
    cnt = count;
    q = number;
    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q / 10;
        mul = 1;
    }
    if (result == number)
        printf("%d is an Armstrong number", number);
    else
        printf("%d is not an Armstrong number", number);
    return 0;
}