/*
    reffer to the repo readme.md file.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int hard,tensile;
    float carbon;
    printf("Please enter hardness, carbon content and tensile strength of steel\n");
    scanf("%d %f %d",&hard,&carbon,&tensile);
    if (hard>50)
    {
        if (carbon<0.7)
        {
            if (tensile>5600)
            {
                printf("The given steel is Graded: 10\n");
            }else{
                printf("The given steel is Graded: 9\n");
            }
        }else{
            if (tensile>5600)
            {
                printf("The given steel is Graded: 7\n");
            }else{
                printf("The given steel is Graded: 6\n");
            }
        }  
    }else{
        if (carbon<0.7)
        {
            if (tensile>5600)
            {
                printf("The given steel is Graded: 8\n");
            }else{
                printf("The given steel is Graded: 6\n");
            }
        }else{
            if (tensile>5600)
            {
                printf("The given steel is Graded: 6\n");
            }else{
                printf("The given steel is Graded: 5\n");
            }
        }
    }
getch();
return 0;
}