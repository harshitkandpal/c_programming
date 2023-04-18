/*
     difference between the smallest and largest number.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,t,max=-10000,min=10000;
    printf("Please enter total number of numbers: \n");
    scanf("%d",&t);
    for ( int i = 0; i < t; i++)
    {
        scanf("%d",&n);
        if(n>max){max=n;}
        if(n<min){min=n;}
    }
    printf("Range between[%d,%d] is: %d\n",min,max,max - min+1);
    
getch();
return 0;
}