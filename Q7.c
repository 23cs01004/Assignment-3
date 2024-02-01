#include <stdio.h>

int main()
{
    int m;
    printf("Marks obtained: ");
    scanf("%d", &m);
    if (m>100 || m<0)
    {
        printf("marks should be between 0 and 100");
        return 1;
    }
    int n;
    printf("Classes attended: ");
    scanf("%d", &n);
    int k;
    printf("Total classes: ");
    scanf("%d", &k);
    if (n>k)
    {
        printf("classes attended cannot be more than total classes");
        return 1;
    }
    printf("Grade is ");
    int t = (m*n)/k;
    if (t>=90)
    {
        printf("EX");
    }
    else if (t>=80 && t<89)
    {
        printf("A");
    }
    else if (t>=70 && t<79)
    {
        printf("B");
    }
    else if (t>=60 && t<69)
    {
        printf("C");
    }
    else if (t>=50 && t<59)
    {
        printf("D");
    }
    else if (t>=40 && t<49)
    {
        printf("P");
    }
    else 
    {
        printf("F");
    }
    return 0;
}
