/*Consider a currency system in which there are notes of 6 denominations, 1,2,5,10,50,100.
  if sum of Rs.N is entered through the keyboard. Write a program to compute smallest number of notes to give N.
 */
#include<stdio.h>
#include<conio.h>
int main(){
    int N, R1,R2,R5,R10,R50,R100,temp, total;
    printf("Enter the sum of Rs.N\n");
    scanf("%d",&N);
    R100=N/100;
    temp=N%100;
    R50=temp/50;
    temp=N%50;
    R10=temp/10;
    temp=N%10;
    R5=temp/5;
    temp=N%5;
    R2=temp/2;
    temp=N%2;
    R1=temp/1;
    total =R1+R2+R5+R10+R50+R100;
    printf("Smallest combination of notes: R100:%d R50:%d R10:%d R5:%d R2:%d R1:%d Total notes:%d\n",R100,R50,R10,R5,R2,R1,total);
    getch();
    return 0;
}