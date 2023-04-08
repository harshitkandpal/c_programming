/*
    Write a program to calculate the salary as per the following table:
    male, >= 10, pg, 11000
    male, >= 10, g, 10000
    male, < 10, pg, 10000
    male, < 10, g, 7000

    female, >= 10, pg, 12000
    female, >= 10, g, 9000
    female, < 10, pg, 10000
    female, < 10, g, 6000
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int xp;
    char gender,status;
    printf("Please enter your years of experience(number),gender(m/f),status(g/p)\n");
    scanf("%d %c %c",&xp,&gender,&status);
    if(gender == 'm'){
        if (xp>= 10)
        {
            if (status=='p')
            {
                printf("Your salary will be: 11000" );
            }else{
                printf("Your salary will be: 10000" );
            }
            
        }else{
            if (status=='p')
            {
                printf("Your salary will be: 10000" );
            }else{
                printf("Your salary will be: 7000" );
            }
        }
        
    }else{
         if (xp>= 10)
        {
            if (status=='p')
            {
                printf("Your salary will be: 12000" );
            }else{
                printf("Your salary will be: 9000" );
            }
            
        }else{
            if (status=='p')
            {
                printf("Your salary will be: 10000" );
            }else{
                printf("Your salary will be: 6000" );
            }
        }
    }
getch();
return 0;
}