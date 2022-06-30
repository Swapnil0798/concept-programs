#include<stdio.h>
int main()
{
   int num=1,sum=0,i,count=1,n;
   printf("how many no you want to print");
   scanf("%d",&n);
    printf("perfect no are");
    while(count<=n)
    {
        for(i=1;i<num;i++)
        {
          if(num%i==0)
          sum=sum+i;

        }
        if(num==sum)
        {

            printf("%d\n",num);
            count++;
        }
        num++,sum=0;


    }



    return 0;
}