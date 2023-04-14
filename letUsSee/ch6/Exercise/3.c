/*
    compound interest. for 10 sets of data.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n,q;
    float r,p,a;
    for (int i = 1; i < 11; i++)
    {
        printf("Please enter rate of interest and principal amount\n");
        scanf("%f %f",&r,&p);
        r=r/100;
        printf("Enter number of interest compounds per year\n");
        scanf("%d",&q);
        printf("Enter the number of years\n");
        scanf("%d",&n);
        a = p*pow((1+(r/q)),n*q);
        printf("Amount: %.2f",a);
    }
    
getch();
return 0;
}