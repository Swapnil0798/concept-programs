#include<stdio.h>
int main()
{

   int element[20],num,i,min,max;
   printf("enter 20 element \n");
   scanf("%d",&num);

   printf("enter the element \n");

   for(i=0;i<num;i++)
   {
       scanf("%d",&element[i]);
       
       max=min=element[0];

   }
   for(i=1;i<num;i++)
   {
       if(element[i]>max)
       {
     max=element[i];
     
       }
       else if(element[i]<min)
       {
         min=element[i];
       }
       printf("maximum element of set is %d\n",max);
       printf("minimum element of set is %d\n",min);

   }
   
    return 0;
}