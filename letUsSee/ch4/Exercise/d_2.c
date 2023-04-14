/*
    reffer to the repo readme.md file.
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int red,green,blue;
    float white,cyan,magenta,yellow,black;
    printf("Please enter color in R,G,B.\n");
    scanf("%d %d %d",&red,&green,&blue);
    if (red>green)
    {
        if (red>blue)
        {
            white=red/255.0;
        }else{
            white=blue/255.0;
        }  
    }else
    {
        if (green>blue)
        {
            white=green/255.0;
        }else{
            white=blue/255.0;
        }
        
    }
    cyan=(white-(red/255.0))/white;
    magenta=(white-(green/255.0))/white;
    yellow=(white-(blue/255.0))/white;
    black=1-white;
    printf("Color in CMYK is %.1f, %.1f, %.1f, %.1f\n",cyan,magenta,yellow,black);
getch();
return 0;
}