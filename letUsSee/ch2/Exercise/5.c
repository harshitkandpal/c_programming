/*
    write a program to print all trignometric ratios for a given angle in degrees.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float angle;
    printf("Please enter angle in degrees.\n");
    scanf("%f",&angle);
    angle = (3.141/180)*angle;
    printf("sin: %.3f\ncos: %.3f\ntan: %.3f\n",sin(angle),cos(angle),tan(angle));
getch();
return 0;
}