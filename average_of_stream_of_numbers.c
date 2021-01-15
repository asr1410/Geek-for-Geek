#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void average(int arr[], int n)
{
    float avg = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i + 1; j++)
        {
            sum += arr[j];
        }
        avg = sum / (i + 1);
        printf("The average of %d numbers --> %.2f \n", i + 1, avg);
    }
}
int main()
{
    int n;
    printf("Number of element you want to insert :- ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    average(arr, n);
    return 0;
}