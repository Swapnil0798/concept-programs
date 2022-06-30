#include<stdio.h>
void printsum(int,int);
void main()
{
  int a,b;
  printf("enter the two no\n");
  scanf("%d%d",&a,&b);
  printsum(a,b);
  printf("enter the value of a and b again\n");
  scanf("%d%d",&a,&b);
 printsum(a,b);
}
void printsum(int x,int y)
{
    printf("%d%d%d",x,y,x+y);
}
