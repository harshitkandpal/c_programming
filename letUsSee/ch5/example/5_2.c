/*
    write a program to find  factorial for a given number.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,fact=1;
    printf("Please enter a number\n");
    scanf("%d",&n);
    while(n!=0){
        fact *=n; 
        n--;
    }
    printf("factorial: %d",fact);
getch();
return 0;
}