/*
    upside down triangle of *
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int rows;
    printf("Please enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <rows; j++)
        {
            if(j<i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
        
    }
    
getch();
return 0;
}