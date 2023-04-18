/*
    Armstrong number between 1 and 500.
*/
#include<stdio.h>
#include<conio.h>

int main(){
    for (int i =1;i<=500; i++)
    {
        int temp = i;
        int sum = 0;
        while (temp!=0)
        {
            sum += (temp%10)*(temp%10)*(temp%10);
            temp=temp/10;
        }

        if (sum==i)
        {
            printf("%d is an Armstrong \n",i);
        }
    }
getch();
return 0;
}