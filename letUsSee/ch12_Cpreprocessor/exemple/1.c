/*
    macros isUpper isLower isAlpha big
*/
#include<stdio.h>
#include<conio.h>

#define isUpper(x) (x>=65&&x<=90?1:0)
#define isLower(x) (x>=97&&x<=122?1:0)
#define isAlpha(x) (isUpper(x)||isLower(x))
#define big(x,y) (x>y?x:y)

int main(){
    char c;
    int a,b;
    printf("Please enter a alphabet/character: ");
    scanf("%c",&c);
    if(isUpper(c)==1){printf("Entered character is a capital letter.\n");}
    if(isLower(c)==1){printf("Entered character is a small letter.\n");}
    if(isAlpha(c)!=1){printf("Entered character is not an alphabet.\n");}
    printf("Please enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("The bigger number is %d.\n",big(a,b));
getch();
return 0;
}