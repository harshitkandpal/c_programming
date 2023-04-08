/*
    write a program to determine whether the character is capital letter,a small case letter,a digit or a special symbol.
    A-Z -            65-90
    a-z -            97-122
    0-9 -            48-57
    special symbol - 0-47,58-64,91-96,123-127 
*/
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Please enter a character\n");
    scanf("%c",&ch);
    if (ch>=65&&ch<=90)
    {
        printf("%c is a capital letter",ch);
    }else if (ch>=97&&ch<=122){
        printf("%c is a small case letter",ch);
    }else if(ch>=48&&ch<=57){
        printf("%c is a digit",ch);
    }else{
        printf("%c is a symbol",ch);
    }
    
getch();
return 0;
}