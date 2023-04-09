/*
    Paper of size A0 has dimensions 1189mm X 841mm. Each subsequent size A(n) is defined as A(n-1) cut half, parallel to its shortest side.
    Thus, paper of size A1 would have dimensions 841mm X 594mm. write a program to print paper sizes A0 to A8.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int s=841,l=1189,temp;
    for (int i = 0; i < 9; i++)
    {   
        if (i>0)
        {
            printf("A%d: %dmm X %dmm\n",i,s,l);
            temp=l/2;
            l=s;
            s=temp;
        }else{
            printf("A%d: %dmm X %dmm\n",i,s,l);
            temp=l/2;
            l=s;
            s=temp;
        }
    }
    
getch();
return 0;
}