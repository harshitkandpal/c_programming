/*
    write a program to return absolute number(mod) of a given number.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter a number.\n");
    scanf("%d",&n);
    if(n<0){
        n-=2*n;
        printf("%d",n);
    }else{
        printf("%d",n);
    }
getch();
return 0;
}