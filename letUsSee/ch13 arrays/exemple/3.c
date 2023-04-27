/*
    find the frequency of an element in the array.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int count = 0,n;
    int num[] = {8,18,2,3,3,5,9,7,8,9};
    printf("Please enter the nuber: ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        if (n==num[i])
        {
            count++;
        }
    }
    printf("The frequency of %d is %d\n",n,count);
    
getch();
return 0;
}