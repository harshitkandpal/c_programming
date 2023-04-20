/*
    A function which returns sum, average and standard deviation
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void stats(int *s, double *av, double *st){
    int n1,n2,n3,n4,n5;
    printf("Please enter 5 numbers\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *s = n1+n2+n3+n4+n5;
    *av = *s/5.0;
    *st = sqrt((pow((n1-*av),2.0)+pow((n2-*av),2.0)+pow((n3-*av),2.0)+pow((n4-*av),2.0)+pow((n5-*av),2.0))/5);
}
int main(){
    int sum;
    double average, standerd;
    stats(&sum,&average,&standerd);
    printf("Sum: %d\nAverage: %.2lf\nStanderd deviation: %.2lf\n",sum,average,standerd);
getch();
return 0;
}