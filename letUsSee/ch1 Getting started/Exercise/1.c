/*
    write a program to covert temperature given in fahreheit to centigrade.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float temp;
    printf("Please enter temperature in fahreheit: \n");
    scanf("%f",&temp);
    printf("Temperature in centigrade: %.2f\n",(temp-32)*5/9);
getch();
return 0;
}