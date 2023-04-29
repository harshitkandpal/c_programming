/*

*/
#include<stdio.h>
#include<conio.h>
int main(){
    int A[30],max,min,l;
    lable:
    printf("Please enter number of numbers you want to enter: ");
    scanf("%d",&l);
    if (l>30)
    {
        printf("Sorry, number of numbers can\'t be greater than 30\n");
        goto lable;
    }
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &A[i]);
    }
    max=A[0];
    min=A[0];
    for (int i = 0; i < l; i++)
    {
        if (A[i] > max)
        {
            max=A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
        
    }
    printf("Minimum value: %d\nMaximum value: %d\n",min,max);
getch();
return 0;
}