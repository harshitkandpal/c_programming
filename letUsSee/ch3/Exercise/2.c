/*
    If the age of Ram,  Shyam and Ajay are input through keyboard, write a program to determine youngest of them.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int r,s,a;
    printf("Please enter the age of Ram, Shyam and Ajay.\n");
    scanf("%d %d %d",&r,&s,&a);
    if (r<s)
    {
        if(r<a){
            printf("Ram is youngest\n");
        }else{
            printf("Ajay is youngest\n");
        }
    }else{
        if(s<a){
            printf("Shyam is youngest\n");
        }else{
            printf("Ajay is youngest\n");
        }
    }
    
getch();
return 0;
}