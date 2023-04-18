/*
    write a program to receive values of latitude(L1,L2) and longitude(G1,G2), in degrees, of two places on the earth and output the
    distance (D) between them in nautical miles.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float L1,G1,G2,L2,D;
    printf("Enter values of latitude(L1,L2) and longitude(G1,G2) in degrees.\n");
    scanf("%f %f %f %f",&L1,&L2,&G1,&G2);
    D =3963*acos((sin(L1)*sin(L2)) + (cos(L1)*cos(L2)*cos(G2-G1)));
    printf("%.2f\n",D);
getch();
return 0;
}