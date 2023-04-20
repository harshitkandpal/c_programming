/*
    write fuction to cerculate value of 3 variables
*/
#include<stdio.h>
#include<conio.h>
void circulate(int *x, int *y, int *z){
    int temp;
    temp = *x;
    *x = *z;
    *z=*y;
    *y=temp;
}
int main(){
    int a,b,c;
    printf("Please enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    circulate(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    circulate(&a,&b,&c);   // just to show it will rotate again and again
    printf("%d %d %d\n",a,b,c);
getch();
return 0;
}