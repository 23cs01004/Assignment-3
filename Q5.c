#include <stdio.h>

int main()
{
    int d;
    printf("Enter days: ");
    scanf("%d", &d);
    if (d<=0)
    {
        printf("Wrong input");
    }
    else if (0<d && d<6)
    {
        printf("Fine is 1 rupee");
    }
    else if (5<d && d<11)
    {
        printf("Fine is 2 rupees");
    }
    else if (10<d && d<31)
    {
        printf("Fine is 5 rupees");
    }
    else 
    {
        printf("Membership cancelled");
    }
    return 0;
}    
