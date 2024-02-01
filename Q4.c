#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, y1, y2, y3;
    printf("Enter first coordinate: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter second coordinate: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter third coordinate: ");
    scanf("%f %f", &x3, &y3);
    float d1 = sqrt(((x1 -x2)*(x1-x2)) + ((y1 -y2)*(y1-y2)));
    float d2 = sqrt(((x3 -x2)*(x3-x2)) + ((y3 -y2)*(y3-y2)));
    float d3 = sqrt(((x1 -x3)*(x1-x3)) + ((y1 -y3)*(y1-y3)));
    float greatest = (d1>d2)?d1 : d2;
    greatest = (d3>greatest)? d3 : greatest+0;
    float d = d1 +d2 +d3;
    if (greatest == d/2.0)
    {
        printf("Same line");
    }
    else
    {
        printf("Not on same line");
    }
    return 0;
}


    
