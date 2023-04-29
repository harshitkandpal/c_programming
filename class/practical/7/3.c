/*

*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char ch[31];
    int n;
    printf("Please enter a string of 30 or less characters: ");
    scanf("%s",ch);
    n=strlen(ch);
    for (int i = 0; i < n/2+1; i++)
    {
        if (ch[i]!=ch[n-i-1])
        {
            printf("Given string is not palindrome.\n");
            getch();
            exit(0);
        }
        
    }
    printf("Given string is palindrome.\n");
getch();
return 0;
}