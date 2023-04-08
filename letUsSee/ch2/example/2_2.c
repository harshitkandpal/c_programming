/*Write a program for reverse the number*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n, temp=0;
    printf("Please enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=temp*10;
        temp+=n%10;
        n=n/10;
    }
    printf("Reverse: %d\n",temp);
    getch();
    return 0;
}