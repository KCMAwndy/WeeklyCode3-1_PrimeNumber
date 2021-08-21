#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, num, count = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("Number %d is a prime number.", num);
    }
    else {
        printf("Number %d is not a prime number.", num);
    }
}