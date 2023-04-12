/*
    Given the centre coordinates and the radius of the circle. Determine whether a given point will lie within circle.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    float d,r;
    printf("Please enter coordinates of the centre point of the circle\n");
    scanf("%d %d",&x1,&y1);
    printf("Please enter radius of the circle\n");
    scanf("%f",&r);
    printf("Please enter coordinates of the point\n");
    scanf("%d %d",&x2,&y2);
    d =sqrt( pow((x1-x2),2) + pow((y1-y2),2) );
    if (r>=d)
    {
        printf("The given point lie within the circle");
    }else{
        printf("The given point do not lie within the circle");
    }
    
getch();
return 0;
}