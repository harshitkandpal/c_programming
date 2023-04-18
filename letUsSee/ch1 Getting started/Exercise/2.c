/*
    write a program to find area and perimeter of rectangle and circle.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int l,b,r;
    printf("Please enter length, breadth of rectangle,and radius of circle.\n");
    scanf("%d %d %d",&l,&b,&r);
    printf("Perimeter of rectangle: %d\nArea of rectangle: %d\nCircumference of circle: %.3f\nArea of circle: %.3f\n",2*(l+b),l*b,2*3.141*r,3.141*r*r);
getch();
return 0;
}