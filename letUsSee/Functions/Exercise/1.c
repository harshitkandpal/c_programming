/*
    leap year
*/
#include<stdio.h>
#include<conio.h>
    void leapYear(int year){
        if ((year % 100 == 0&&year % 400==0)||(year % 100 != 0&&year % 4==0))
        {
            printf("%d is a leap year\n",year);
        }else{
            printf("%d is not a leap year\n",year);
        }
    }
int main(){
    int year;
    printf("Please enter year\n");
    scanf("%d",&year);
    leapYear(year);
getch();
return 0;
}