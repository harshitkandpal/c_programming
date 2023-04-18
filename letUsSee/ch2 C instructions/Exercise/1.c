/*
if a 5 digit number is input through the keyboard, write a program to calculate the sum of its digits.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0;
    printf("Please enter a 5 digit number.\n");
    scanf("%d",&n);
    for (int i = 0; i < 5; i++)
    {
        sum += n%10;
        n /= 10;
    }
    printf("Sum of digits: %d\n",sum);
getch();
return 0;
}