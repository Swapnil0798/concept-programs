#include<stdio.h>
int main()
{
   int a=20;
   int*iptr=&a;
   void*vptr=iptr;
   printf("int*is implicitely to void");
    return 0;
}