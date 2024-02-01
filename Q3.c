#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>c && c+b>a && a+c>b)
    {
        printf("Sides of triangle");
    }
    else
    {
        printf("Are not the sides of triangle");
    }
}    