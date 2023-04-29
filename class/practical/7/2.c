/*

*/
#include<stdio.h>
#include<conio.h>
int main(){
    int A[30],n,l;
    lable:
    printf("Please enter number of numbers you want to enter: ");
    scanf("%d",&l);
    if (l>30||l<2)
    {
        printf("Sorry, number of numbers can\'t be greater than 30 and less than 2\n");
        goto lable;
    }
    for (int i = 0; i < l; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter 1 for ascending sort and 2 for descending sort\n");
    scanf("%d", &n);
    if (n==1)
    {
        for (int i = 0; i < l-1; i++)
        {
            for (int j = 0; j < l-i-1; j++)
            {
                if (A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            }
        }
        
    }else{
        for (int i = 0; i < l-1; i++)
        {
            for (int j = 0; j < l-i-1; j++)
            {
                if (A[j]<A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d\t",A[i]);
    }
getch();
return 0;
}