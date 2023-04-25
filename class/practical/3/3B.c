/*
    half abc triangle
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int rows;
    printf("Please enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++)
    {
        char c = 65;
        for (int j = 0; j < rows; j++)
        {
            if(j>(rows-i-2)){
                printf("%c",c);
                c++;}
            else{
                printf(" ");}
        }
        printf("\n");
    }
     
getch();
return 0;
}