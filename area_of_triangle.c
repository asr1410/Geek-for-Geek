#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void areaOfTriangle(float, float, float);
int main()
{
    float side_1, side_2, side_3;
    printf("Enter side AB of triangle ABC :- ");
    scanf("%f", &side_1);
    printf("Enter side BC of triangle ABC :- ");
    scanf("%f", &side_2);
    printf("Enter side CA of triangle ABC :- ");
    scanf("%f", &side_3);
    areaOfTriangle(side_1, side_2, side_3);
    return 0;
}
void areaOfTriangle(float a, float b, float c)
{
    float SemiPerimeter = (a + b + c) / 2;
    float area = sqrt((SemiPerimeter) * (SemiPerimeter - a) * (SemiPerimeter - b) * (SemiPerimeter - c));
    printf("The area of triangle of side %.2f, %.2f and %.2f = %.2f", a, b, c, area);
}