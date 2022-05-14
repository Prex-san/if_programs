//Program to check if a given word is a palindrome or not
#include <stdio.h>
#include <string.h>
int main(){
    char string[101];
    int len,flag = 1;
    scanf("%100[^\n]%*c",string);
    len = strlen(string)-1;
    printf("%d\n",len);
    for(int i=0,j = len;i<j;i++,j--){
        if(string[i]==' '){//For two word palindromes like "taco cat" and "my gym" that has a space
            i++;
            continue;
        }
        else if(string[j]==' '){// and for multi-word palindromes like "no lemon no melon" and "never odd or even"
            j--;
            continue;
        }
        if(flag==1){
            if(string[i]==string[j]){//For single word palindromes like "racecar" and "level"
                flag = 1;
                continue;
            }
        }
        flag = 0;
    }
    if(flag == 1)
        printf("The string %s is a palindrome\n",string);
    else
        printf("The string %s is not a palindrome\n",string);

}