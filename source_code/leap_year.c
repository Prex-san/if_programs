// Program to check if the given year is a leap year or not
#include <stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%4d",&year);
    if((year%100 != 0 && year%400 == 0) || (year%4 == 0 && year%100 != 0))
        printf("The given year is a leap year!\n");
    else
        printf("The given year is not a leap year\n");
}
