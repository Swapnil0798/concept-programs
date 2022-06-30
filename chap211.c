#include<stdio.h>
int main()
{
    int ch=0;
    int a;
    int s,b,c,d;
    printf("enter your standard");
    scanf("%d",&ch);

    switch(ch)
    {

    case 1:
          
          a=2*3+4%5-3/2+6;
          printf("%d\n",a);
          break;
    case 2:
       printf("%d%d%d%d",6%5,6%-5,-6%5,-6%-5);
       break;
       default :
       printf("no print");

 case 3:
   int a=2,b=2,c=1,d;
   a<b>c;
   printf("%d",d);

 }
    return 0;

}