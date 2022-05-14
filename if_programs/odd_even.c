//Check if the given number is odd or even without modulus operator
#include <stdio.h>
#include <string.h>
int main(){
    char number[11];//__INT32_MAX__ = 2147483647
    int len;
    fgets(number,10,stdin);
    len = strlen(number) - 2;//Ignoring '\0' and setting the len equal to the index
    if(number[len] == '0' || number[len] == '2' || number[len] == '4' || number[len] == '6' || number[len] == '8')
        printf("The given number is even!\n");
    else if (number[len] == '1' || number[len] == '3' || number[len] == '5' || number[len] == '7' || number[len] == '9')
        printf("The given number is odd!\n");
}