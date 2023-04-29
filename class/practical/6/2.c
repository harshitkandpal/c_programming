/*

*/
#include<stdio.h>
#include<conio.h>
int fibo(int n){
    if (n==0||n==1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);    
}
int main(){
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    printf("%d\t",0);
    printf("%d\t",1);
    for (int i = 2; i <num; i++)
    {
        printf("%d\t",fibo(i));
    }
getch();
return 0;
}