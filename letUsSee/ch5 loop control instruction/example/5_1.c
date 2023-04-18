/*
    overtime - 40hours or more
    determine overtime pay of n employees
    rate of overtime pay 120 per hour 
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n,ot,hours;
    printf("Please enter number of employees: ");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("Please enter total hours worked: ");
        scanf("%d",&hours);
        if(hours>=40){
            ot = (hours-40)*120;
        }else{
            ot = 0;
        }
        printf("Hours:%d hours\nOvertime pay: %d\n",hours,ot);
        n--;
    }
getch();
return 0;
}