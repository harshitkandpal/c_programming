/*
    using conditianl operator check whether the given year is leap year or not
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("Please enter year\n");
    scanf("%d",&year);
    (year%100==0)?(year%400==0)?(printf("%d is a leap year\n",year)):(printf("%d is not a leap year\n",year)):(year%4==0)?(printf("%d is a leap year\n",year)):(printf("%d is not a leap year\n",year));
getch();
return 0;
}