/*
    calaculate factorial value
*/
#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
 int result = 1;
 if (n==0)
 {
    return 1;
 }else{
    while(n!=0)
    {  
        result = result*n;
        n--;
    }
    return result;
 }  
}
int main(){
    int a;
    printf("Please enter a number\n");
    scanf("%d",&a);
    printf("Factorial of %d is %d\n",a,factorial(a)); 
getch();
return 0;
}