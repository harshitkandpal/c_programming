/*
    write a program to print all possible combinations of 1,2,3 using for loop.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                printf("%d %d %d \n",i,j,k);
            }
            
        }
        
    }
    
getch();
return 0;
}