/*
    Game Op 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int matchsticks = 21;
    int remove = 0;
    char turn = 'y';
    while (matchsticks>0)
    {
        printf("Let's go\n");
        printf("Choose number of matchsticks you want to lift 1,2,3,4\n");
        scanf("%d",&remove);
        matchsticks -= remove;
        printf("Matchstics remaining %d\n",matchsticks);
        turn = 'y';
        if(matchsticks>1){
            switch (matchsticks)
            {
             case 20:
                remove=4;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;   
             case 19:
                remove=3;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 18:
                remove=2;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 17:
                remove=1;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 15:
                remove=4;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;   
             case 14:
                remove=3;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 13:
                remove=2;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 12:
                remove=1;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 10:
                remove=4;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;   
             case 9:
                remove=3;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 8:
                remove=2;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 7:
                remove=1;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 5:
                remove=4;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 4:
                remove=3;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 3:
                remove=2;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             case 2:
                remove=1;
                printf("My choice is %d\n",remove);
                matchsticks -= remove;
                printf("Matchstics remaining %d\n",matchsticks);
                turn = 'c';
                break;
             default:
                goto lable;
                break;
            }
            turn = 'c';
        }
    }
    if (turn=='y')
    {
        printf("Computer won\n");
    }else{
        lable:
        printf("You won\n");
    }
    
getch();
return 0;
}