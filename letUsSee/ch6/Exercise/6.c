/*
    population is 100000 now it is been growing steadly @ of 10% the print population at the end of last 10years.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    for (int i = 2022; i >2012; i--)
    {
        printf("End of %d polpulation is %.0f\n", i,100000/(1-0.1*(i-2022)));
    }
    
getch();
return 0;
}