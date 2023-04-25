/*
    print hello n times using for loop
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Hello World\n");
    }
    
    
getch();
return 0;
}