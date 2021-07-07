#include"stdio.h"
main(){
    int x,y;
    printf("Please enter the x value:");
    scanf("%d",&x);
    printf("Please enter the y value:");
    scanf("%d",&y);
    if (x<0)
    {
        if (y>0)
        {
            printf("The coordinates are in the 2 quadrant");
        }else{
            printf("The coordinates are in the 3 quadrant");
        }  
    }else{
        if (y>0)
        {
            printf("The coordinates are in the 1 quadrant");
        }else{
            printf("The coordinates are in the 4 quadrant");
        }
    }
}