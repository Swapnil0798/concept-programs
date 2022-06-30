#include<stdio.h>
int main()
{
    int list[10],num,min,temp,i,j;
    printf("enter the no of element\t");
    scanf("%d",&num);
    printf("enter the element \n");
    for(i=0;i<num;i++)
    
        scanf("%d",&list[i]);

    for(i=0;i<num-1;i++)
    {
           min=j;
    for(j=i+1;j<num;j++)
    
      if(list[j]<list[min])
      
          
      {
          temp=list[min];
          list[min]=list[i];
          list[i]=temp;
      
      printf("after soerting element are \n");
      for(i=0;i<num;i++)
      
          printf("%d\n",list[i]);
      }

    }
    return 0;
}