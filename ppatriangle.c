#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c,s,area;
  printf("enter the no");
  scanf("%f%f%f",&a,&b,&c);
  s=a+b+c/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of triangle is%6.2fsqr meter\n",area);

 printf("s value is %f",s);

    return 0;
}