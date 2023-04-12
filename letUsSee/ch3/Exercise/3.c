/*
    Write a program to check whether the triangle is valid or not if the angles are entered through keyboard.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter 3 angles in degrees.\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180){
        printf("The triangle is valid.\n");
    }else{
        printf("The triangle is invalid.\n");
    }
getch();
return 0;
}