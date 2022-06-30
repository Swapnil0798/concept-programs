#include<stdio.h>
int main()
{
    int val=12;
    int*iptr=&val;
    int**pptr=&iptr;
    int***sptr=&pptr;
    printf("value is%d\n",val);
    printf("value of diferencingiptr is%d\n",*iptr);
    printf("value of iptr is %d\n",iptr);
    printf("value of pptr is %d\n",**pptr);
    printf("value of sptr is %d\n",***sptr);



    return 0;
}