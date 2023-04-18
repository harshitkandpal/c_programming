/*
    write a program to add first seven terms of the following series using a for loop.
    1/1! + 1/2! + 1/3! + 1/4! ...
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float fact,sum=0.0;
    for (int i = 1; i <= 7; i++)
    {   
        fact =1.0;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += i/fact;
    }
    printf("%f\n",sum);
    
getch();
return 0;
}