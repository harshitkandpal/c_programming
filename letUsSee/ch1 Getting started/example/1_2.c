/*
    The distance between two cities (in kilometers) is input through the keyboard. Write a program to convert and print this distance in meters,
    feet, inches and centimeters.
*/
#include<stdio.h>
int main(){
    float km , m , cm , ft , inch ;
    printf("Enter the distance in kilometers: \n");
    scanf("%f",&km);
    m = km*1000;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;
    printf("Distance in meters: %.2f\nDistance in cm: %.2f\nDistance in inch: %.2f\nDistance in ft: %.2f\n",m,cm,ft,inch);
    return 0;
}
