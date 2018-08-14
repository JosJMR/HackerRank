#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a,b;
float c,d;
int main()
{
    scanf("%d %d", &a , &b);
    scanf("%f %f", &c, &d);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f", c+d, c-d);    
    return 0;
}