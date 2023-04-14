/*
    write a program to find greatest number of 3 nos using conditional operator.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Plese enter 3 numbers.\n");
    scanf("%d %d %d",&a,&b,&c);
    (a>=b)?(a>=c)?(printf("%d is the greatest\n",a)):(printf("%d is the greatest\n",c)):(b>=c)?(printf("%d is the greatest\n",b)):(printf("%d is the greatest\n",c));
getch();
return 0;
}