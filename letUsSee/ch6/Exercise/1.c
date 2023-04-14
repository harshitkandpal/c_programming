/*
    write table of user entered number.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%dX%d=%d\n",n,i,n*i);
    }
    
getch();
return 0;
}