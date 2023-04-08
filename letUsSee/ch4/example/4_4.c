/*
    Write a program to check wether a given year is leap year or not.
    using the logical operators && and ||.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("Please enter year\n");
    scanf("%d",&year);
    if((year%400==0)||(year%100!=0&&year%4==0)){
        printf("%d is a leap year",year);
    }else{
        printf("%d is not a leap year",year);
    }
getch();
return 0;
}