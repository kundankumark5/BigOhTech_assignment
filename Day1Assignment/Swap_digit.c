//ii) Write a program (without using inbuilt functions and not using Strings or array) to swap first and last digits of any number
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, first, last, swap;
    printf("Please Enter any 4 digit no\n   ");
    scanf("%d", &n);
    last = n % 10;
    first = n / 1000;
    swap = last * 1000;
    swap = swap + (n % 1000);
    swap = swap - last;
    swap = swap + first;
    printf("swapped no is=%d\n", swap);
    return (0);
}