/*
 1/1/1 is monday then what is the day on 1st jan of the given year.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int year,key;
    printf("Enter year.\n");
    scanf("%d",&year);
    key = (year*365)%7;
    switch (key)
    {
    case 0:
        printf("Sunday.\n");
        break;
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("Saturday.\n");
        break;
    default:
        printf("Error\n");
        break;
    }
getch();
return 0;
}