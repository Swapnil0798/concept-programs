#include<stdio.h>
int main()
{

int year;
printf("enter the year\n");
scanf("%d",&year);

if((year%4==0)&&(year%100!=0))
{
    printf("%d enter leap year\n",year);
}
else
{
   printf("%d is not leap year\n",year);


}
    
    return 0;
}