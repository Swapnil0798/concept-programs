#include<stdio.h>
int main()
{
  int val=10;
  float*ptr=(float*)&val;
  printf("value of vairaible is %d\n",val);
  printf("pointer holds %p\n",ptr);
    return 0;
}