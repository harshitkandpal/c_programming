/*
    program using macros present in a file
*/
#include<stdio.h>
#include<conio.h>
#include "areaperi.h"
int main(){
    int rads,side,a,h,l;
    printf("Please enter radius of circle: ");
    scanf("%d",&rads);
    printf("Circumference of the circle: %.2f\nArea of the circle: %.2f\n",periC(rads),areaC(rads));
    printf("Please enter side of square: ");
    scanf("%d",&side);
    printf("Perimeter of the square: %d\nArea of the square: %d\n",periS(side),areaS(side));
    printf("Please enter sides of triangle: ");
    scanf("%d%d%d",&side,&rads,&a);
    printf("Please enter lenght and height of triangle: ");
    scanf("%d%d",&l,&h);
    printf("Perimeter of the square: %d\nArea of the square: %.2f\n",periT(side,rads,a),areaT(l,h));
getch();
return 0;
}