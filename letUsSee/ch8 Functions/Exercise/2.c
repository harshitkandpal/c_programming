/*
    find prime factors of the given number
*/
#include<stdio.h>
#include<conio.h>
void findPrimeFactors(int a){
    for (int i = 2; i <= a; i++)
    {
        if (a%i==0)
        {
            printf("%d, ", i);
            a/=i;
            i--;
        }
        
    }
    
}
int main(){
    int n;
    printf("Please enter a number\n");
    scanf("%d",&n);
    printf("Factors of the given number: ");
    findPrimeFactors(n);
getch();
return 0;
}