#include<stdio.h>
int addition(int no1,int no2)
{
   int ans=0;
   ans=no1+no2;
    return ans;
}
int substraction(float s1,float s2)
{
  float sns;
  sns=s1-s2;
  return sns;

}
int main()
{
   int a=10,b=12,c=0,z=0;
   float d=23.3,e=10.1;
   int(*fptr)(int,int);
   fptr=addition;
   c=fptr(a,b);
   printf("%dadditon is\n",c);
  
    float(*substract)(float,float);
    sub= substraction  ;
    z=substract(d,e);
    printf("%fsubstraction is\n",z);

    return 0;
}