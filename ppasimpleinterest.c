#include<stdio.h>
int main()
{
  float p,roi,t,i,amt;
  printf("enter principle rate and time");
  scanf("%f%f%f",&p,&roi,&t);
  i=p*roi*t/100;
  amt=p+i;
  printf("interest is %f \n",&i);
   printf("amount is %f \n",&amt);


    return 0;

}l