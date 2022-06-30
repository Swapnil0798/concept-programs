#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0;
    int*p=NULL;
    int icnt=0;
    printf("enter the no of element");
    scanf("%d",&size);

    for(icnt=0;icnt<size;icnt++)
    {
      scanf("%d",&p[icnt]);
    }
    printf("eneter the element are");
    for(icnt=0;icnt<size;icnt++)
    {
      printf("%d",&p[icnt]);
    }
  free(p);


    return 0;
}