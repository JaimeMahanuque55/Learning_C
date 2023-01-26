////////// Basics

// What is a palindrome?
// A number or word or a phrase if read backwards gives the same number or word or a phrase as it is being read forwad.
// example: 1221,racecar,24542, etc.

// Idea to make a code

// Make last number the first number, 2nd last number the second number and so on..
// That means you need to reverse the number and if the reversed number is equal to the actual number then we can say that the number is palindrome.

// What happens when we divide the number by 10?

// 456/10 -> Remainder = 6  Quotient = 45

// The logic
// result = 0
// number = 2332
// q = number

// remainder = q%10
// result = result*10 + remainder
// q = q/10

// code

#include <stdio.h>

int main()
{
    int n, result = 0, q, rem;
    printf("Please enter the number: ");
    scanf("%d", &n);

    q = n;

    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }
    if (result == n)
        printf("Its a palidrome");
    else
        printf("No! its not a palindrome");
    return 0;
}