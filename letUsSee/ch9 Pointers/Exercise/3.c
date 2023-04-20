/*
    distance,area and 1 or 0 returning fuction depending on wether it lie inside or outside the triangle respectively.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void isTriangle(double *a){
    if (*a==0.0) 
    {
        printf("It's not a triangle\n");
    }
}
void areaT(int *x1, int *y1, int *x2, int *y2,int *x3, int *y3, double *a){
    *a += 0.5*sqrt(pow(*x1*(*y2-*y3)+*x2*(*y3-*y1)+*x3*(*y1-*y2),2));
    
}
int isInside(double *a,double *ta){
    if (*a==*ta)
    {
        printf("The given point lies within triangle\n");
        return 1;
    }else{
        printf("The given point does not lies within triangle\n");
        return 0;
    }
    
}
int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;
    double area=0,testArea=0;
    restart:
    printf("Please enter the coordinates of 3 sides of the triangle\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    areaT(&x1,&y1,&x2,&y2,&x3,&y3,&area);
    isTriangle(&area);
    if (area>0)
    {
        printf("Area of the given Triangle: %.2lf\n",area);
        printf("Please enter coordinates to check weather they are inside or outside\n");
        scanf("%d%d",&x4,&y4);
        areaT(&x4,&y4,&x1,&y1,&x2,&y2,&testArea);
        areaT(&x4,&y4,&x2,&y2,&x3,&y3,&testArea);
        areaT(&x4,&y4,&x3,&y3,&x1,&y1,&testArea);
        isInside(&area,&testArea);
    }else{
        goto restart;
    }
getch();
return 0;
}