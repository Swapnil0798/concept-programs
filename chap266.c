#include<stdio.h>
int main()
{

    int a=0xffff;
    ~a;
    printf("%x",a);
    return 0;
}