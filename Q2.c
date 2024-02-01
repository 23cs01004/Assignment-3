#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c)
    {
        printf("All are same");
        return 0;
    }
    int greatest=0;
    if (a>b)
    {
        greatest =a;
    }
    else 
    {
        greatest = b;
    }
    if (greatest > c)
    {
        printf("Greatest is %d", greatest);
    }
    else
    {
        printf("Greatest is %d", c);
    }   
    return 0;
}