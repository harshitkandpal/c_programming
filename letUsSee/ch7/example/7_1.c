/*
    write a menu driven program which has following options;
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int choice,num,i,fact;
    while (1)
    {
        printf("1.Factorial\n2.Prime\n3.Odd/Even\n4.Exit\nYour choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d",&num);
            fact =1;
            for (int i = 1; i <= num; i++)
            {
                fact *= i;
            }
            printf("Factorial: %d\n",fact);
            break;
        case 2:
            printf("Enter the number: ");
            scanf("%d",&num);
            for (int i = 2; i < num; i++)
            {
                if (num%i==0)
                {
                    printf("Not prime\n");
                    break;
                }
            }
            if (i=num)
            {
                printf("Prime number\n");
            }
            break;
        case 3:
            printf("Enter the number: ");
            scanf("%d",&num);
            if (num%2==0)
            {
                printf("Even\n");
            }else{
                printf("odd\n");
            }
            break;
        case 4:
            exit(0);/* terminates the program execution*/
        default:
            printf("Invalid choice\a\n");
        }
    }
    
return 0;
}