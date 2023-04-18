/*Ramesh basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of his 
  basic salary. Write a program to calculate his gross salary.
*/
#include <stdio.h>
#include <conio.h>
int main(){
    float bs;
    printf("Please enter your basic salary: ");
    scanf("%f",&bs);
    printf("Your gross salary is: %.2f",1.6*bs);
    getch(); 
    return 0;
}