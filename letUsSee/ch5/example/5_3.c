/*
    write a program to find the value of one number raised to the power of another.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float a,p=1;
    int b;
    printf("Please enter a number\n");
    scanf("%f",&a);
    printf("Please enter power\n");
    scanf("%d",&b);
    while (b!=0)
    {
        p *= a;
        b--;
    }
    printf("Answer: %.4f\n",p);
getch();
return 0;
}