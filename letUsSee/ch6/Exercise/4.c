/*
    log n 
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float n,logn;
    printf("Please enter the number to take natural log of: \n");
    scanf("%f",&n);
    logn = (n-1)/n;
    for (int i = 2; i < 8; i++)
    {
        logn += pow(0.5*(n-1)/n,2);
    }
    printf("%.3f\n",logn);
getch();
return 0;
}