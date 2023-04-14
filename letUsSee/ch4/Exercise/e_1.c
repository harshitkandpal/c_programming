/*
    reffer to the repo readme.md file.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    char c;
    printf("Please enter a character or special symbol\n");
    scanf("%c",&c);
    (c>=97&&c<=122)?printf("The enter character is lower case\n"):printf("The enter character is not lower case\n");
    ((c>=33&&c<=47)||(c>=58&&c<=64))?printf("The enter character is a special symbol\n"):printf("The enter character is not a special symbol\n");
getch();
return 0;
}