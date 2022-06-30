#include<stdio.h>
int main()
{

    float u=3.5;
    int v,w,x,y;
    v=(int)(u+0.5);
    w=(int)u+0.5;
    x=(int)(int)u+0.5;
    y=(u+(int)0.5);

   printf("%d\n%d\n%d\n%d",u,w,x,y);
    return 0;
}