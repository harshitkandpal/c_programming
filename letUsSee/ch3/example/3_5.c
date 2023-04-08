/*
    check whether the year is leap or not.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("Please enter year\n");
    scanf("%d",&year);
    if(year%100==0){
        if (year%400==0)
        {
            printf("%d is leap year",year);
        }else{
            printf("%d is not a leap year",year);
        }
        
    }else{
        if (year%4==0)
        {
            printf("%d is leap year",year);
        }else{
            printf("%d is not a leap year",year);
        }
        
    }
getch();
return 0;
}