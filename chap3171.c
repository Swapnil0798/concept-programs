#include<stdio.h>
int main()
{
   int n,val,j,r=1;
   printf("enter no");
   scanf("%d",&n);
     while(r<=n)
     {
       val=r;
       for(j=1;j<=n-r;j++)
       
       printf("\t");
       
       for(j=1;j<=2*r-1;j++)
       
           if(j<=(2*r-1)/2)
           
               printf("%d\t",val++);
           
           else if(j==(2*r-1)/2+1)
           
               printf("%d\t",val);
           
           else
           
               printf("%d\t",--val);
           
           printf("\n");
           r++;
       


     }
    return 0;
}