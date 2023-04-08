/*
    wrrite a program to write all prime numbers between 1 and 300.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i,n=1;
    printf("Prime numbers between 1 and 300\n");
    for ( n=1; n <=300; n++)
    {
        i=2;
        for ( i=2; i < n; i++)
        {
            if (n%i==0){
                break;
            }
        }
        if(n==i||n==1){
            printf("%d\t",n);
        }
        
    }
    
getch();
return 0;
}