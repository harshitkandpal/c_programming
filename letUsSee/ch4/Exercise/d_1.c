/*
    Length of the sides of a trinangle is entered through keyboard. check wheather it is isosceles, equilatral or scalene triangle. 
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Please enter the sides of a trinangle.\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c)
    {
        printf("It is a equalateral triangle.\n");
    }else if (a==b||b==c||a==c)
    {
        printf("It is a isosceles triangle.\n");
    }else{
        printf("It is a scalene triangle.\n");
    }
    
    
getch();
return 0;
}