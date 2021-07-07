#include"stdio.h"
main(){
int i,a[3];
printf("Please enter the three sides of the triangle\n");
for(i=0;i<=2;i++){
    printf("Please enter the %d side length:",(i+1));
    scanf("%d",&a[i]);
}
if (a[0]+a[1]<a[2]||a[0]+a[2]<a[1]||a[2]+a[1]<a[0])
{
    printf("该三角形不成立\n");
}

if (a[0]==a[1]==a[2])
{
    printf("该三角形是:等边三角形\n");
}
if (a[0]==a[1]||a[0]==a[2]||a[1]==a[2])
{
    printf("该三角形是:等腰三角形\n");
}

if ((a[0]*a[0]+a[1]*a[1]==a[2]*a[2])||(a[2]*a[2]+a[1]*a[1]==a[0]*a[0])||(a[0]*a[0]+a[2]*a[2]==a[1]*a[1]))
{
    printf("该三角形是:直角三角形\n");
}
}
