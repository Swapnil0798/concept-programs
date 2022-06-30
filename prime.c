#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number \t");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        break;
           }
           if(i==num)
           {
               printf("no is prime");
           }
  else 
  {
      printf("no is not prime");
  }





return 0;
}