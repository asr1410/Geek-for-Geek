#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
double sum(float);
int main()
{
    float num;
    printf("Enter the number of the series :- ");
    scanf("%f", &num);
    printf("The sum is %f", sum(num));
    return 0;
}
double sum(float n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (1 / n + sum(n - 1));
    }
}
