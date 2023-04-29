/*

*/
#include<stdio.h>
#include<conio.h>
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int main(){
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    printf("Factorial: %d\n",fact(num));
getch();
return 0;
}