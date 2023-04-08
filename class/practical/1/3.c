/*
    To calculate area of rectangle and circle.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int l,w,r;
    printf("Please enter radius of circle, length and width of rectangle\n");
    scanf("%d %d %d",&r,&l,&w);
    printf("Area of rectangle: %d\nArea of circle: %.4f\n",l*w,3.14*r*r);
getch();
return 0;
}