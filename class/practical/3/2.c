/*
    factorial using for loop
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = n; i >0; i--)
    {
        fact *=i;
    }
    printf("Factorial of %d is %d\n",n,fact);
    
getch();
return 0;
}