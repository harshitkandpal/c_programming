/*
    Transpose of a matrix
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a[3][5];
    printf("Enter a 3X5 maitrix: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
getch();
return 0;
}