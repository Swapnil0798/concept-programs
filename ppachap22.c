#include<stdio.h>
int main()
{
  int i=1,j=1,k=2,f;
  f=i&&j++&&k++;
printf("%d\n%d\n%d",f,k,j);
    return 0;
}