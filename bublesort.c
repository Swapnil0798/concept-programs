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
          for(j=0;j<num-1;j++)
          if(list[j]>list[j+1])
          {
              temp=list[j];
              list[j]=list[j+1];
              list[j+1]=temp;

          }
printf("after sorting element are\n:");
for(i=0;i<num;i++)
printf("%d\n",list[i]);
    }
    return 0;
}