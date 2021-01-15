#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
float triangleArea(int x1, int x2, int x3, int y1, int y2, int y3)
{
    float area;
    area = 0.5 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    return area;
}
int main()
{
    int x1, x2, x3, x, y, y1, y2, y3;
    printf("Enter the coordinate of A point\n");
    printf("Value of x at point A --> ");
    scanf("%d", &x1);
    printf("Value of y at point A --> ");
    scanf("%d", &y1);
    printf("Enter the coordinate of B point\n");
    printf("Value of x at point B --> ");
    scanf("%d", &x2);
    printf("Value of y at point B --> ");
    scanf("%d", &y2);
    printf("Enter the coordinate of C point\n");
    printf("Value of x at point C --> ");
    scanf("%d", &x3);
    printf("Value of y at point C --> ");
    scanf("%d", &y3);
    printf("Enter the coordinate (x,y) you want to check :\n");
    scanf("%d", &x);
    scanf("%d", &y);
    float areaLarge = triangleArea(x1, x2, x3, y1, y2, y3);
    // printf("%.2f", areaLarge);
    float areaSmall = (triangleArea(x, x2, x3, y, y2, y3) + triangleArea(x1, x, x3, y1, y, y3) + triangleArea(x1, x2, x, y1, y2, y));
    // printf("%.2f", areaSmall);
    if (areaLarge == areaSmall)
    {
        printf("The coordinate lies in-side the triangle");
    }
    else
    {
        printf("The coordinate lies out-side the triangle");
    }

    return 0;
}