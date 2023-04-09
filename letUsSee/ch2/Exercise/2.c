/*
    write a program to convert cartesian coordinates into polar coordinates.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
   float x,y,r,thita;
   printf("Please enter X and Y coordinates.\n");
   scanf("%f %f",&x,&y);
   r = sqrt(x*x+y*y);
   thita = atan(y/x); 
   printf("%.2f, %.3f\n",r,thita);
getch();
return 0;
}