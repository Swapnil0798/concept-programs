#include<stdio.h>
int main()
{

float u,a,v,t;
printf("enter value of initial velocity");
scanf("%f",&u);
printf("enter amount of acceleration");
scanf("%f",&a);
printf("enter time");
scanf("%f",&t);
v=u+a*t;
printf("velocity after%4.2fsec is%4.2fm/s",t,v);

    return 0;
}