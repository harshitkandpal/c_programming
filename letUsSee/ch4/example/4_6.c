/*
    write a program to check whether the sides of the trianle is valid or not.
    hint:- The sides of the trianle is valid if sum of two sides is greater than the largest of the three sides.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int s1,s2,s3,ls,sum;
    printf("Please enter the sides of the trianle\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1>=s2){
        if (s1>=s3)
        {
            ls=s1;
            sum=s3+s2;
        }else{
            ls=s3;
            sum=s1+s2;
        }
        
    }else{
        if (s2>=s3)
        {
            ls=s2;
            sum=s3+s1;
        }else{
            ls=s3;
            sum=s1+s2;
        }
    }
    if (sum>ls)
    {
        printf("The triangle is valid.\n");
    }else{
        printf("The triangle is invalid.\n");
    }
    
getch();
return 0;
}