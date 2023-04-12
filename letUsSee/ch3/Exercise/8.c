/*
    Given cordinates check whether lies on X-axis or Y-axis or origin. 
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int x,y;
    printf("Please enter coordinates of the point.\n");
    scanf("%d %d",&x,&y);
    if(x==0&&y==0){
        printf("The point lie on the origin.\n");
    }else if (y==0&&x!=0){
        printf("The point lie on Y-axis.\n");
    }else if (x==0&&y!=0)
    {
        printf("The point lie on X-axis.\n");
    }else{
        printf("The point lie do not lie on the origin,X-axis or on Y-axis.\n");
    }
    
getch();
return 0;
}