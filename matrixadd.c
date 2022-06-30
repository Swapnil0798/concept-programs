#include<stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10],result[10][10];
    int m,n,row,cols;
    printf("enter the order of matrix\t");
    scanf("%d\t%d",&m,&n);
    printf("enter the element of matrix1\n");

    for(row=0;row<m;row++) 
    {
        for(cols=0;cols<n;cols++)
        
            scanf("%d",&mat1[row][cols]);
        
        printf("enter the element of matrix 2\n");
    }
        for(row=0;row<m;row++)
        {
           for(cols=0;cols<n;cols++)
           scanf("%d",& mat2[row][cols]);


        }
        for(row=0;row<m;row++)
        for(cols=0;cols<n;cols++)
        result[row][cols]=mat1[row][cols]+mat2[row][cols];
        printf("the resultant adition is:\n");
        {
            for(cols=0;cols<n;cols++)
            {
                printf("%d",result[row][cols]);
                printf("\n");
            }
        }


    return 0;
}