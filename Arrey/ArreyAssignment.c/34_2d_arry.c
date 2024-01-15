// addition of two matrix 

#include<stdio.h>
void main()
{
    int arr[3][3]={6,5,6,7,8,9,2,4,6};
    int arr2[3][3]={6,5,6,7,8,9,2,4,6};
    // printf("Enter the Elemnt ..\n");
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d %d]-->",i,j);
            printf("%d ",arr[i][j]+arr2[i][j]);
             printf("\n");
        }
        printf("\n");
    }
}
          
          
