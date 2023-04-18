/*
    Given length and breadth of the rectangle. check whether it's area is greater then it's perimeter.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int l,b;
    printf("Please enter length and breadth of rectangle.\n");
    scanf("%d %d",&l,&b);
    if (l*b <2*(l+b))
    {
        printf("Perimeter %d is greater than Area %d.\n",2*(l+b),l*b);
    }else{
        printf("Area %d is greater than Perimeter %d.\n",l*b,2*(l+b));
    }
    
getch();
return 0;
}