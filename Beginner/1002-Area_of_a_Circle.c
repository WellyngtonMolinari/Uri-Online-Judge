#include <stdio.h>
#include <math.h>
 
int main() 
{
    double r=0.0, area=0.0;

    scanf("%lf", &r);
    r = pow(r,2);
    
    area = 3.14159 * r;
    
    printf("A=%.4lf\n", area);
 
    return 0;
}