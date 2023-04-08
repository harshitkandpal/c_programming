/*
    To find greatest of two integers and their type i.e. odd or even
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("Please enter 2 numbers: \n");
    scanf("%d %d",&a,&b);
    if(a>b){
        if (a%2==0){
            if (b%2==0)
            {
                printf("%d is greater than %d\n",a,b);
                printf("%d is even %d is even\n",a,b);
            }else{
                printf("%d is greater than %d\n",a,b);
                printf("%d is even %d is odd\n",a,b);
            }
        }else{
            if (b%2==0)
            {
                printf("%d is greater than %d\n",a,b);
                printf("%d is odd %d is even\n",a,b);
            }else{
                printf("%d is greater than %d\n",a,b);
                printf("%d is odd %d is odd\n",a,b);
            }
        }
    }else{
        if (a%2==0){
            if (b%2==0)
            {
                printf("%d is greater than %d\n",b,a);
                printf("%d is even %d is even\n",a,b);
            }else{
                printf("%d is greater than %d\n",b,a);
                printf("%d is even %d is odd\n",a,b);
            }
        }else{
            if (b%2==0)
            {
                printf("%d is greater than %d\n",b,a);
                printf("%d is odd %d is even\n",a,b);
            }else{
                printf("%d is greater than %d\n",b,a);
                printf("%d is odd %d is odd\n",a,b);
            }
        }
    }
getch();
return 0;
}