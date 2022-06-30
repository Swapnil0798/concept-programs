#include<stdio.h>
int main()
{
   int n,r=1,val=1,j;
   printf("enter the no rows triangle");
   scanf("%d",&n);
   while(r<=n)//print n rows
   {
     for(j=1;j<r;j++)//print a row
     
         printf("%d\t",val++);//print values
         printf("\n");//new line for ner row
         r++;
     

   }

    return 0;
}