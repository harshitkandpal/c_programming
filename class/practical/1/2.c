/*
    To calculate sum and average of 3 user entered values.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2,n3;
    printf("Please enter 3 numbers: \n");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("Sum: %d\nAverage: %.2f\n",(n1+n2+n3),(n1+n2+n3)/3.0);
getch();
return 0;
}