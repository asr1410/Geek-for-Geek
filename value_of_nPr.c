#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int fact(int);
int nPr(int, int);
int main()
{
    int n, r;
    printf("Calculator of nPr\n");
    printf("print the value of n :- ");
    scanf("%d", &n);
    printf("print the value of r :- ");
    scanf("%d", &r);
    printf("The value of %dPr%d is %d", n, r, nPr(n, r));
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return 1;
    return (n * fact(n - 1));
}
int nPr(int a, int b)
{
    return (fact(a) / fact(a - b));
}