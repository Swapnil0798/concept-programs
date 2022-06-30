#include<stdio.h>
int main()
{
    int a[2][3]={11,12,14,15,18,10};

    printf("use subscript operator\n");

    printf("%d\t%d\t%d\n",a[0][0],a[0][1],a[0][2]);
    printf("%d\t%d\t%d\n",a[1][0],a[1][1],a[1][2]);
     
     
      printf("use use of pointer expresion:\n");

      printf("%d\t%d\t%d\n",*(*(a+0)+0),*(*(a+0)+1),*(*(a+0)+2));  
      printf("%d\t%d\t%d\n",*(*(a+1)+0),*(*(a+1)+1),*(*(a+1)+2));  
     


      printf("use mixed form expresion:\n");

      printf("%d\t%d\t%d\n",*(a[0]+0),*(a[0]+1),*(a[0]+2));  
      printf("%d\t%d\t%d\n",*(a[1]+0),*(a[1]+1),*(a[1]+2));  


    return 0;
}