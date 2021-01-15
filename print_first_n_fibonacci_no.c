#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, firstNumber = 0, SecondNumber = 1;
    printf("How many fibonacci number you want :- ");
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++)
    {
        if (i == 1 || i == 2)
        {
            SecondNumber = i - 1;
        }
        else
        {
            SecondNumber = SecondNumber + firstNumber; //SecondNumber += firstNumber
            firstNumber = SecondNumber - firstNumber;
        }
        printf("Value at place %d of Fibonacci series :- %d\n", i, SecondNumber);
    }
    return 0;
}