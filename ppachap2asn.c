#include<stdio.h>
int main()
{

    int a=10,b=12,c,d,s,e,f,w;
    c=a&b;
    d=a*b;
    s=a/b;
    f=a^b;
    e=~b;
    w=a%b;
    printf("%d\n%d\n%d\n%d\n%d\n%d",c,d,s,f,e,w);
return 0;
}