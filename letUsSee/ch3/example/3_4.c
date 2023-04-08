/*
    Checkwhether a number is even or odd.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    printf("Please enter a number\n");
    scanf("%d",&i);
    if(i%2==0){
        printf("%d is even\n",i);
    }else{
        printf("%d is odd\n",i);
    }
    getch();
    return 0;
}
