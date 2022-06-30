#include<stdio.h>
#include<math.h>
int main()
{
    float element[10],sum=0.0,mean,var,sd;
    int num,i;
    printf("enter the no  element");
    scanf("%d",&num);

    printf("enter the element\n");

    for(i=0;i<num;i++)
    {
        scanf("%f",&element[i]);

    }
    for(i=0;i<num;i++)
    {
        sum=sum+element[i];
        mean=sum/num;
        sum=0.0;
    }
    for(i=0;i<num;i++)
    {
        sum=sum+(element[i]-mean)*(element[i]-mean);
        var=sum/num;
        sd=sqrt(var);
    }
    printf("arithmatic mean is\t%f\n",mean);
    printf("variance is\t%f\n",var);
    printf("standard deviation is\t %f\n",sd);
    

    return 0;
}