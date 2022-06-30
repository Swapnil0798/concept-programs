#include<stdio.h>
int main()
{
   int arr[5]={11,12,13,14,15};
   printf(" size of array is:%d",sizeof(arr));
    int a[2][3]={11,12,13,14,15};

    printf("element of array are \n");

    printf("%d\t%d\t%d\n",a[0][0],a[0][1],a[0][2]);
    printf("%d\t%d\t%d\n",a[1][0],a[1][1],a[2][2]);


    return 0;
}