#include<stdio.h>
int main()
{
 int no1,no2;
 printf("enter the no\t");
 scanf("%d %d",&no1,&no2);

 printf("no before swap%d %d\n",no1,no2);

 no2=no1+no2;
 no1=no2-no1;
 no2=no2-no1;
 
 printf("no after swap %d%d\n",no1,no2);





    return 0;
}