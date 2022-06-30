#include<stdio.h>
int main()
    
    {
      int a[10][10],i,j,rows,cols;
      printf("enter the no row[]<10\t\n");
      scanf("%d",&rows);
       
      printf("enter the no cols[]<10\t\n");
      scanf("%d",&cols);

      printf("enter the element\n");

      for(i=0;i<rows;i++)
      {
      for(j=0;j<cols;j++)
      {
     scanf("%d",&a[i][j]);
     printf("the enter element were\n");
      }
      }
     for(i=0;i<rows;i++)
     {
         for(j=0;j<cols;j++)
         {
             printf("%d",a[i][j]);
             printf("/n");
         }
     }

      

        return 0;
    }
// i for  outer loop counter
//  j for  outer inner counter