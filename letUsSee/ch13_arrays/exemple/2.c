/*
    reverse array using an array
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int A[5];
    int B[5];
    printf("Please enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
        B[4-i]=A[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",B[i]);
    }
getch();
return 0;
}