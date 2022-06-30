#include<stdio.h>
#include<math.h>
int main()
{
   int no1,no2,no3;
   float avg;
   printf("enter the no");
   scanf("%d%d%d",&no1,&no2,&no3);
   avg=no1+no2+no3/3;
   printf("avg of 3 numbers are%f",avg);

    return 0;
}