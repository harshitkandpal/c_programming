/*
    A five digit number is entered through the keyboard. write a program to obtain the reverse of it and to deternime whether the 
    original and reverse numbers are equal or not.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,r=0,tn;
    printf("Enter a five digit number.\n");
    scanf("%d",&n);
    tn=n;
    while (tn>0)
    {
        r= r*10;
        r+= tn%10;
        tn=tn/10;
    }
    
    if (r==n)
    {
        printf("The reverse of the given number is: %d.\nWhich is equal to: %d.\n",r,n);
    }else{
        printf("The reverse of the given number is: %d.\nWhich is not equal to: %d.\n",r,n);
    }
getch();
return 0;
}