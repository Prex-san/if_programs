//Program to calculate the average grade and display the report card
#include <stdio.h>
int main(){
    int subjects,average = 0;
    printf("Enter the number of subjects: ");
    scanf("%d",&subjects);
    int scores[subjects];//to keep track of scores
    char grades[subjects];//to keep track of grades
    for(int i = 0;i<subjects;i++){
        printf("Enter score in subject %d: ",i+1);
        do{//In the case of an invalid input
            scanf("%d",&scores[i]);
            if(scores[i]>100)
                printf("Enter a valid score [>100]: ");
        }while(scores[i] > 100);
        average = scores[i] + average;
        if(scores[i]<=100 && scores[i]>90)
            grades[i] = 'O';
        else if(scores[i]<=90 && scores[i]>80)
            grades[i] = 'A';
        else if(scores[i]<=80 && scores[i]>70)
            grades[i] = 'B';
        else if(scores[i]<=70 && scores[i]>60)
            grades[i] = 'C';
        else if(scores[i]<=60 && scores[i]>50)
            grades[i] = 'D';
        else
            grades[i] = 'F';
    }
    average = average / subjects;
    printf("SCORE\tGRADE\n");
    for(int i = 0;i<subjects;i++){
        if(grades[i]!='F')
            printf(" %d \t  %c  \n", scores[i],grades[i]);
        else
            printf(" %d \t FAIL\n", scores[i]);
    }
    printf("The average score is %d\n", average);
}