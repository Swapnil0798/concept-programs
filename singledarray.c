#include<stdio.h>
int main()
{
  int marks[2000],lc,studs,sum=0;
  float avg;
  printf("enter the no of student in class\n");
  scanf("%d",&studs);
  printf("enter the marks of student\n\n");
  for(lc=0;lc<studs;lc++)
  {

      printf("enter the marks of student %d\n",lc+1);
      scanf("%d",&marks[lc]);
  }
   for(lc=0;lc<studs;lc++)
   {
       sum=sum+marks[lc];
       avg=(float)sum/studs;


       printf("\navg of marks of aclass%f",avg);
   }



    return 0;
}