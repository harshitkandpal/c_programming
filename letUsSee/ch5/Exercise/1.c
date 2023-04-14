/*
    write a program to print all the ASCII values and their equivalent characters using a while loop. 0 to 255.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int i=0;
    while (i<256)
    {
        printf("%c ASCII: %d \n",i,i);
        i++;
    }
    
getch();
return 0;
}