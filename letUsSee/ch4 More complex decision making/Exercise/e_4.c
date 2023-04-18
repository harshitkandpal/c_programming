/*
    write a program to check whether sum of square of sine and square of cosine is equal to 1 for a given angle in degrees.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    double angle;
    printf("Enter the angle in degrees\n");
    scanf("%lf",&angle);
    angle = (3.14159265359*angle)/180;
    if ((pow(sin(angle),2)+pow(cos(angle),2))>0.9)
    {
        printf("sum of square of sine and square of cosine is equal to 1\n");
    }else{
        printf("sum of square of sine and square of cosine is not equal to 1\n");
    }
getch();
return 0;
}