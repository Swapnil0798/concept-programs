#include<stdio.h>
int main()
{

  int no1,no2,no3;
  printf("enter the no \t");
  scanf("%d%d",&no1,&no2);
  printf("no of before swap %d %d\n",no1,no2);
  no3=no1;
  no1=no2;
  no2=no3;
  printf("number after swap %d%d\n",no1,no2);





    return 0;
}