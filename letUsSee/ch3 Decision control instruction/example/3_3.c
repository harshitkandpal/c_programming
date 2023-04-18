/*
    Write a program to find if the seller had made profit or loss.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float cPrice,sPrice;
    printf("Please enter cost price and selling price of an item\n");
    scanf("%f%f",&cPrice,&sPrice);
    if(sPrice>cPrice){
        printf("Profit: %.2f",(sPrice-cPrice));
    }else if (sPrice==cPrice)
    {
        printf("No profit no lose: %.2f",(sPrice-cPrice));
    }else{
        printf("Loss: %.2f",(cPrice-sPrice));
    }
    getch();
    return 0;
}