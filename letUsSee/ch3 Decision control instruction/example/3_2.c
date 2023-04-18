/*
    in a company an employee is paid as under:
    if his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
    if his basic salary is equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
    Write a program to find gross salary.
*/
#include<Stdio.h>
#include<conio.h>
int main(){
    float salary,gSalary;
    printf("Please enter your basic salary: \n");
    scanf("%f",&salary);
    if (salary<1500)
    {
        gSalary=2*salary; // (10+90)%salary+salary
        printf("Your gross salary: %.0f\n",gSalary); 
    }
    else
    {
        gSalary=(1.98*salary)+500; // (98)%salary+salary+500
        printf("Your gross salary: %.0f\n",gSalary);
    }
    getch();
    return 0;
}