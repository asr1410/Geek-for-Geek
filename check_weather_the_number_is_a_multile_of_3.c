#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number to check :- ");
    scanf("%d", &n);
    if (n % 3 == 0)
        printf("It is a multiple of 3");
    else
        printf("Not a multile of 3");

    return 0;
}