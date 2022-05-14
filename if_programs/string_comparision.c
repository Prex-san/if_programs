//Program to determine how many times the corresponding positions in two strings hold the same characters
#include <stdio.h>
#include <string.h>
int main(){
    char string1[101];
    int len,count = 0;
    printf("Enter the first string: ");
    scanf("%[^\n]%*c",string1);
    len = strlen(string1)+1;//space for '\0'
    char string2[len];
    printf("Enter the second string: ");
    fgets(string2,len,stdin);//restricting string 2 to the length of string 1
    char counter[len];//to keep track of the characters
    for(int i = 0;i < len - 1; i++){
        
        if(string1[i] != ' ' && string2[i] != ' '){//String Matching excluding ' ' 
            if(string1[i] == string2[i]){
                count++;
                counter[i] = string1[i];
                continue;
            }
        }
        
        //BUG FIX: '\n' in string2 appears when len(string2)<len
        if(string2[i] == '\n') //Replacing \n with EOF in str2 to avoid weird formatting 
            string2[i] = 0x05;

        
        counter[i] = '0';
    }
    //RESULTS
    printf("The two strings:\n \"%s\"\n \"%s\" \ncontain %d characters that hold the same position in both the strings.\n\n",string1,string2,count);
    printf("The characters in the same corresponding positions are:\n");
    printf("CHARACTER\tPOSITION\n");
    for(int i = 0;i<len-1;i++){
        if(counter[i] != '0')
            printf("    %c    \t   %d   \n",counter[i],i);
    }
}