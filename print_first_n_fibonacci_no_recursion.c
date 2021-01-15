#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int fibRecursive(int);
int main()
{
    int n, firstNumber = 0, SecondNumber = 1;
    printf("How many fibonacci number you want :- ");
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        printf("Value at place %d of Fibonacci series :- %d\n", i, fibRecursive(i));
    }
    return 0;
}

int fibRecursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return (fibRecursive(n - 1) + fibRecursive(n - 2));
    }
}