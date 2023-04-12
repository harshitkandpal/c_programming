/*
    Given the cartesian coordinates of three points find that they fall one one straight line.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    double x1,x2,x3,y1,y2,y3,a;
    printf("Please enter the coordinates of three points.\n");
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a= 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)); // area of traingle. 
    if(a==0){
        printf("The three points falls on one straight line.\n");
    }else{
        printf("The three points do not falls on one straight line.\n");
    }
getch();
return 0;
}