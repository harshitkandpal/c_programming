/*
    prime factors
*/
#include<stdio.h>
#include<conio.h>

void primeFactors(int num,int i){
    if (num%i==0)
    {
        printf("%d\t",i);
        num/=i;
        primeFactors(num,i);
    }else{
        primeFactors(num,++i);
    }
    
}

int main(){
    int n,i=2;
    printf("Please enter a number: ");
    scanf("%d",&n);
    printf("Factors: ");
    primeFactors(n,i);
getch();
return 0;
}