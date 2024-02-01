#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int n = a*a;
    int x = 10;
    int n1, n2;
    while (n/x != 0)
    {
        n2 = n/x;
        n1 = (n%x);
        if (n1 != 0 && n2 != 0)
        {
            if ( n1 + n2 == a)
            {
                printf("Yes, %d is a Kaprekar Number", a);
                return 0;
            }
            else
            {
                x = x*10;
            }
        }
        else
        {
            x = x*10;
        }
        
    }
    printf("No, %d is not a Kaprekar Number", a);
    return 0;
}    


