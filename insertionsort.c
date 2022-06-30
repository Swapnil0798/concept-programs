#include<stdio.h>
int main()
{
    int list[10],num,current,i,j;
    printf("enter the no \t");
    scanf("%d",&num);

    printf("enter the element");
    for(i=0;i<num;i++)
    {
    scanf("%d",&list[i]);

    }
    for(i=1;i<num;i++)
    {
        if(list[i]<list[i-1])
        {
         current=list[i];
        }
        for(j=i-1;j>=0;j--)
        {
            list[j+1]=list[j];
            if(j==0)//list[j-1<=current])
            break;
        }
        list[j]=current;
    }
    printf("after sorting elementare \n");
    for(i=0;i<num;i++)
    {
        printf("%d\n",list[i]);
    }

    return 0;
}