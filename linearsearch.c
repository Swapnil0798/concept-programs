#include<stdio.h>
int main()
{
    int element[10],num,i,key,found;
    printf("enter rthe no of elementmax[10]");
    scanf("%d",&num);
 
 
    printf("enter the element");
    
    for(i=0;i<num;i++)
    {
         
        scanf("%d",&element[i]);
    }  
     printf("enter key of your search");
        scanf("%d",&key);
    for(i=0;i<num;i++)
    
    if(element[i]==key)
    {
        printf("%dexit at location no%d\n%d\n",key,i+1);
        found=1;
    }
    if(found==0)
    {
        printf("does not exist in the list%d",key);
    }

    return 0;
}