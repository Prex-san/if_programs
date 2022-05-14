// Program to find the maximum value out of three floating point numbers
#include <stdio.h>
int main(){
    float a,b,c,max;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a>=b && a>=c)
        max = a;
    else if(b>=a && b>=c)
        max = b;
    else
        max = c;
    printf("The max value out of (%.2f, %.2f, %.2f) is %.2f\n",a,b,c,max);
}