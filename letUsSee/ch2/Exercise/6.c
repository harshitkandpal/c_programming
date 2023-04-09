/*
    write a program to interchange 2 numbers.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("Please enter 2 numbers.\n");
    scanf("%d %d",&a,&b);
    a = a + b;
    b = a - b;
    a = a -b;
    printf("Interchanged numbers %d %d\n",a,b);
getch();
return 0;
}