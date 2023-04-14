/*
    refer readme.md file
*/
#include<stdio.h>
#include<conio.h>
int main(){
    for ( int y =1; y < 7; y++)
    {
        float i;
        for(float x=5.5; x < 12.6; x+=0.5){
            i = 2 + (y + 0.5*x);
            printf("For Y = %d X = %0.1f and i = %0.2f \n",y,x,i);
        }
        printf("\n");
        printf("\n");
        printf("\n");
    }
    
getch();
return 0;
}