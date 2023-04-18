/*
    BMI calculator
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float bmi,weight,height;
    printf("Please enter your weight(kg) and height(cm)\n");
    scanf("%f %f",&weight,&height);
    height = pow((height/100),2);
    bmi = weight/height;
    if(bmi<15.1){
        printf("Your BMI is: %.1f starvation\n",bmi);
    }else if (bmi>=15.1&&bmi<=17.5)
    {
        printf("Your BMI is: %.1f anorexic\n",bmi);
    }else if (bmi>=17.6&&bmi<=18.5)
    {
        printf("Your BMI is: %.1f underweight\n",bmi);
    }else if (bmi>=18.6&&bmi<=24.9)
    {
        printf("Your BMI is: %.1f ideal\n",bmi);
    }else if (bmi>=25&&bmi<=29.9)
    {
        printf("Your BMI is: %.1f overweight\n",bmi);
    }else if (bmi>=30&&bmi<=39.9)
    {
        printf("Your BMI is: %.1f obese\n",bmi);
    }else{
        printf("Your BMI is: %.1f morbidly obese\n",bmi);
    }
getch();
return 0;
}