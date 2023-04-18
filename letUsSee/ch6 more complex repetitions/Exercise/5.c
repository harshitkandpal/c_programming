/*
     write a code to print pythagorean tripets with side length less than or equal to 30.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    for ( int a = 1; a < 31; a++)
    {
        for (int b = 1; b < 31; b++)
        {
            for (int c = 1 ; c < 31; c++)
            {
                if(a<=b){
                    if(pow(c,2)==(pow(a,2) + pow(b,2))){
                    printf("pythagorean tripet [%d,%d,%d]\n",a,b,c);
                }
                }
            }
            
        }
        
    }
    
getch();
return 0;
}