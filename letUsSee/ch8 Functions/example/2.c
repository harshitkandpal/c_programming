/*
    write a function power (a,b), to calculate the value of a raised to b.
*/
#include<stdio.h>
#include<conio.h>
int power(int a, int b)
{
    if (a==0||b==0)
    {
        return 1;
    }else{
        int result = 1;
        for (int i = 0; i < b; i++)
        {
            result = result*a;
        }
        return result;
    }
}
int main(){
    int a,b;
    printf("Please enter a number and power\n");
    scanf("%d %d",&a,&b);
    printf("Factorial of %d is %d\n",a,power(a,b));
getch();
return 0;
}