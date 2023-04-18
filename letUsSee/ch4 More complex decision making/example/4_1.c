/*
    Marks of 5 different subjects are input through the keyboard.
    The student gets a division as per the following rules:
    % >= 60 - First division
    % >= 50 - Second division
    % >= 40 - Third division
    % < 40 - Fail  
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int m1,m2,m3,m4,m5;
    float percent;
    printf("Please enter Marks of 5 different subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    percent = (m1+m2+m3+m4+m5)/5.0;
    if (percent>=60)
    {
        printf("Your percentage: %.2f\nResult: Passed with first division",percent);
    }else if (percent>=50&&percent<60)
    {
        printf("Your percentage: %.2f\nResult: Passed with second division",percent);
    }else if (percent>=40&&percent<50)
    {
        printf("Your percentage: %.2f\nResult: Passed with third division",percent);
    }else{
        printf("Your percentage: %.2f\nResult: Failed",percent);
    }
    
    
getch();
return 0;
}