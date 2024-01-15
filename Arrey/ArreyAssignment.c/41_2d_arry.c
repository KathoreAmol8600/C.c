// sum of right daigonal 

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
int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(i>j)
            {
            sum=sum+arr[i][j];
            // printf("%d",arr[i][j]);   
            }
        }
   }
   printf("sum is %d",sum);

}
          
          
