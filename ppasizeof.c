#include<stdio.h>
int main()
{
    int a=1,b;
    b=sizeof(a++);
    printf("%d",b);

    return 0;
}