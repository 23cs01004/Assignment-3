#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a<0)
    {
        printf("Negative");
    }
    else if (a>0)
    {
        printf("Positive");
    }
    else 
    {
        printf("Zero");
    }
    return 0;
}    