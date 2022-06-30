#include<stdio.h>
int main()
{

  int u=3.5,v,w,x,y;
  v=(int)(u+0.5);
  w=(int)(u+0.5);
  x=(int)(int)u+0.5;
  y=(u+(int)0.5);
  printf("%d\n%d\n%d\n%d\n",v,w,x,y);


    return 0;
}