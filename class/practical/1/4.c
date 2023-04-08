/*
    To calculate 40% da from basics, 20% hra from basics.
    Also calculate the gross salary of an employee.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    float bSalary;
    printf("Please enter your basic salary\n");
    scanf("%f",&bSalary);
    printf("DA: %.2f\nHRA: %.2f\nGross Salary: %.2f\n",0.4*bSalary,0.2*bSalary,1.6*bSalary);
getch();
return 0;
}