/*
    A company insure its drivers in the following cases:
    -if the driver is married
    -if the driver is unmarried, male & above 30 years of age.
    -if the driver is unmarried, female and above 25 years of age.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    char ms,gender;
    int age;
    printf("Please enter your age(should be a number),gender(m/f) and marital status(m/u)\n");
    scanf("%d %c %c",&age,&gender,&ms);
    if(ms=='m'||(ms=='u' && age>30 && gender=='m')||(ms=='u' && age>25 && gender=='f')){
        printf("Driver is insured.");
    }else{
        printf("Driver is not insured.");
    }
getch();
return 0;
}