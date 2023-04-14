/*
    grace marks
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int fail,class;
    printf("Please enter number of subject you failed and class you get (1,2,3) \n");
    scanf("%d %d",&fail,&class);
    switch (class)
    {
    case 1:
        switch (class)
        {
        case 1:
            printf("5 Grace marks granted\n");
            break;
        case 2:
            printf("5 Grace marks granted\n");
            break;
        case 3:
            printf("5 Grace marks granted\n");
            break;    
        default:
            printf("No Grace marks granted\n");
            break;
        }
        break;
    case 2:
        switch (class)
        {
        case 1:
            printf("4 Grace marks granted\n");
            break;
        case 2:
            printf("4 Grace marks granted\n");
            break;    
        default:
            printf("No Grace marks granted\n");
            break;
        }
        break;
    case 3:
        switch (class)
        {
        case 1:
            printf("5 Grace marks granted\n");
            break;    
        default:
            printf("No Grace marks granted\n");
            break;
        }
        break;    
    default:
        printf("No Grace marks granted\n");
        break;
    }
getch();
return 0;
}