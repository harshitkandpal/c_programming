/*
    pickup largest number of 5X5 matrix.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a[5][5];
    int big;
    printf("Enter a 5X5 maitrix: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    big = a[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j]>big)
            {
                big = a[i][j];
            }
            
        }
    }
    printf("The biggest element is: %d\n",big);
getch();
return 0;
}