/*
    interchange elements in array.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    int num[] = {0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 10; i+=2)
    {
        a = num[i];
        num[i] = num[i + 1];
        num[i + 1] = a;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",num[i]);
    }
getch();
return 0;
}