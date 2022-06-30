#include<stdio.h>
int main()
{


    int num,temp,digit,reverse=0;
    printf("enter the no");
    scanf("%d",&num);
     temp=num;
     while(temp!=0)
     {

         digit=temp%10;
         temp=temp/10;
         reverse=reverse*10+digit;

     }
     if(num==reverse)
     {

         printf("%dis palindron",num);
     }
    else
    {

        printf("%dis not palindron",num);
            }




    return 0;
}