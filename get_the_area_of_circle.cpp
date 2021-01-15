#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    float radius;
    printf("Enter the radius of circle :- ");
    scanf("%f", &radius);
    printf("Area of circle is %.3f", (22 * radius * radius) / 7);
    return 0;
}