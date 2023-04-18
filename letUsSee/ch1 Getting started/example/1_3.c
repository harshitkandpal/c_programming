/*
    if mark obtained by a student in 5 subjects are input through keyboard, write a program to find out the aggregate marks and percentage 
    obtained by the student.
*/
#include <stdio.h>
int main(){
    int m1,m2,m3,m4,m5,sum;
    float percent;
    printf("please enter markes of the 5 subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    percent = sum/5.0;
    printf("Total marks: %d\nPercentage: %.2f\n",sum,percent);


    return 0;
}