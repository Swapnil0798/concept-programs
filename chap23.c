#include<stdio.h>
int main()
{
   int num,bit,temp;
   
   printf("enter the no\t");
   scanf("%d",&num);
   
   printf("enter the  bit no\t");
   scanf("%d",&temp);
   
   temp=1<<(bit-1);
   num=num^temp;

   printf("value after negating bit is %d",num);
    return 0;
}