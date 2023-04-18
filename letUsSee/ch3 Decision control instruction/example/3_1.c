/*While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
  Write a program to calculate total expanses.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int quantity;
    float rate,amount;
    printf("Please enter quantity and rate: \n");
    scanf("%d%f",&quantity,&rate);
    if (quantity>1000)
    {
        amount = quantity*rate*0.9;
        printf("Total expenses after discount is %.2f",amount);
    }else{
        amount = quantity*rate;
        printf("Total expenses is %.2f",amount);
    }
    getch();
    return 0;
}