/*
    first n terms of fibonacci sequence
*/
#include<stdio.h>
#include<conio.h>

int fibo(int num){
    if(num==1||num==0)
    {
        return num;
    }else{
        return fibo(num-1)+fibo(num-2);
    }
}

int main(){
    int n;
    printf("Please enter a number of terms: ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t",fibo(i));
    }
    
getch();
return 0;
}