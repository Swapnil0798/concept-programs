#include<stdio.h>
int main()
{
    int a=12,b=34;
    int x=0x12,y=0x34;
    int c,d,u,v;
    c=a&&b;
    
    u=x&&y;
    v=x*y;
    printf("%d\n%d\n%d\n",c,u,v);




    return 0;
}