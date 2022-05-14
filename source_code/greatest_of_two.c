//Program to find the max between two numbers without if...else
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Using conditional operator:\n");
    c = a>b ? a : b;
    printf("The maximum number out of the two numbers %d and %d is: %d\n",a,b,c);
    //Alternate Solution:
    printf("Using switch case:\n");
    c = a > b;
    switch(c){
        case 1:
            printf("The maximum number out of the two numbers %d and %d is: %d\n",a,b,a);
            break;
        case 0:
            printf("The maximum number out of the two numbers %d and %d is: %d\n",a,b,b);
            break;
    }
}