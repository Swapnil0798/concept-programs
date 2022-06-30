#include<stdio.h>
area(int);
int main()
{
    int radius;
    float area;
    printf("enter the radius");
    scanf("%d",&radius);
    area=area(radius);
    printf("area of circle%f\n",area);
    return 0;
}
area(radius)
{
   
   return 3.14*radius*radius;;
}