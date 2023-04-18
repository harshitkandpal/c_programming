/*
    Ramanujan numbers
    Don't run this program on your computer or cancel it after 5 minutes
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    double sum=0;
    for ( int a= 1; a < 1000; a++)
    {
        for (int b = 1; b < 1000; b++)
        {
            sum = pow(a,3)+pow(b,3);
            goto check;
            retn:
            continue;
            check:
    for ( int c = 1; c < 1000; c++)
    {
        for (int d = 1; d < 1000; d++)
        {  
            if((c!=a)&&(c!=b))
            {
                if (sum==pow(c,3)+pow(d,3))
                {
                    printf("{%d,%d},{%d,%d} are set Ramanujan number %lf\n",a,b,c,d,sum);
                    goto retn;
                }
            }
        }
        
    }
        }
        
    }
    
getch();
return 0;
}
