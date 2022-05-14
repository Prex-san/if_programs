//Progaram to calculate the roots of a given equation
//Formula = (-b \pm sqrt(b^2 - 4ac))/2a
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    double d,r1,r2;
    printf("Enter a: ");
    scanf("%d%*c",&a);
    printf("Enter b: ");
    scanf("%d%*c",&b);
    printf("Enter c: ");
    scanf("%d%*c",&c);
    d = (b*b) - (4*a*c);
    printf("The given equation is %dx^2 + %dx + %d\n",a,b,c);
    if(d == 0){//One root
        printf("The discriminant is %.1lf so the equation has one real root\n",d);
        r1 = ((-1*b) + sqrt(d))/(2*a);
        printf("The root is: %.2lf\n",r1);
    }
    else if(d>0){//Two real roots
        printf("The discriminant is %.1lf so the equation has two distict real roots\n",d);
        r1 = ((-1*b) + sqrt(d))/(2*a);
        r2 = ((-1*b) - sqrt(d))/(2*a);
        printf("The two roots of the equation are: %.2lf and %.2lf\n",r1,r2);
    }
    else if(d<0){//Imaginary roots
        printf("The discriminant is %.1lf so the equation has imaginary roots\n",d);
        d = (-1)*d;
        r1 = (-1*(float)b)/(2*a);
        r2 = (sqrt(d))/(2*a);
        printf("The two roots of the equation are: %.2lf + %.2lfi and %.2lf - %.2lfi\n",r1,r2,r1,r2);
    }
}