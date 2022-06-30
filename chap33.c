#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d;
  float r1,r2;
  int num;
  printf("enter the coefiecent a,b,c\n");
  scanf("%d%d%d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>0)
  {

      r1=(-b+sqrt(d)/(2*a));
      r2=(-b-sqrt(d)/(2*a));
      
        printf("roots are real and unequal\n");
        printf("roots ate %f",r1,r2);
  }
  else if (d==0)
  {  
        
      r1=b/(2*a);
      printf("roots are real and equal\n");
      printf("%f%f",r1,r2);
     
      
  }
  else
  {

printf("not real roots are undefine");
  }
  

  

    return 0;
}