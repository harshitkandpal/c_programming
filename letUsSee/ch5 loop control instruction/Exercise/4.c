/*

*/
#include<stdio.h>
#include<conio.h>
int main(){
    int countP=0, countN=0, count0=0,t=1,n;
    while(t==1){
        printf("Enter the number: ");
        scanf("%d",&n);
        if (n>0)
        {
            countP++;
        }else if(n==0){
            count0++;
        }else{
            countN++;
        }
        printf("Press 1 to go on or 0 to exit\n");
        scanf("%d",&t);
    }
    printf("Count of positive numbers: %d\nCount of zeroes: %d\nCount of negative numbers: %d\n",countP,count0,countN);
getch();
return 0;
}