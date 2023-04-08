/*
    if length of three sides of tringle is input through keyboard, write a program to find area of the tringle.
*/
#include<stdio.h>
#include<math.h>/*for sqrt()*/
int main(){
    float a,b,c,s,area;
    printf("Enter the sides of triangle.\n");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle: %.2f\n",area);

    return 0;
}
