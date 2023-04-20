/*
    write a function to give a number raised to other and factorial of some other number.
*/
#include<stdio.h>
#include<conio.h>
    void powFact(int *pow,int *fact){
        int a,b,c;
        printf("Please enter a number and the power\n");
        scanf("%d%d",&a,&b);
        printf("Please enter a number whoes factorial you want\n");
        scanf("%d",&c);
        for ( int i = 0; i < b; i++)
        {
            *pow *=a;
        }
        if (c==0)
        {
            *fact *=c;
        }else{
            while (c!=0)
            {
                *fact *=c;
                c--;
            }
        } 
    }
int main(){
    int p=1,f=1;
    powFact(&p,&f);
    printf("Power: %d\nFactorial: %d\n",p,f);
getch();
return 0;
}