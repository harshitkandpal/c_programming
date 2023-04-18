/*
    pattern refer redme.md file
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n=1;
    for (int i =1; i <=4; i++)
    {
        for (int j = 1; j <=4; j++)
        {
            if (j>4-i)
            {
                printf("%d ",n);
                n++;
            }else{
               printf(" "); 
            }
            
        }
        printf("\n");
    }
    
getch();
return 0;
}