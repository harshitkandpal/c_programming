/*
    input kg output gram tons pounds
*/
#include<stdio.h>
#include<conio.h>
void convet(int *kg,int *g, float *t, float *p){
    *g = 1000*(*kg);
    *t = *kg/907.5;
    *p = *kg*(2.205);
}
int main(){
    int massInKg,massInG;
    float massInP,massInT;
    printf("Please enter mass in kg\n");
    scanf("%d",&massInKg);
    convet(&massInKg,&massInG,&massInT,&massInP);
    printf("Mass in \nKG: %d\nG: %d\nTon: %.2f\nPounds: %.2f",massInKg,massInG,massInT,massInP);
getch();
return 0;
}