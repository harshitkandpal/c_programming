/*
    sum of digits using recursion.
*/
#include<stdio.h>
#include<conio.h>

int sumOfDigits(int num,int *sumOf){
    if (num==0)
    {
        return 0;
    }
    *sumOf += num%10; 
    sumOfDigits(num/10,sumOf);
    return 0;
}

int main(){
    int n,sum=0;
    printf("Please enter a number: ");
    scanf("%d",&n);
    sumOfDigits(n,&sum);
    printf("%d\n",sum);
getch();
return 0;
}