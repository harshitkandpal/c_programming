/*
    write a program to print 24 hrs time whith proper surfixes
*/
#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 1; i <= 24; i++)
    {
        if(i==24){
            printf("%d:00 midnight\n",i);
        }else if (i>0&&i<12)
        {
            printf("%d:00 AM\n",i);
        }else if (i==12)
        {
            printf("%d:00 NOON\n",i);
        }else if (i>12&&i<24)
        {
            printf("%d:00 PM\n",i);
        }
    }
    
getch();
return 0;
}