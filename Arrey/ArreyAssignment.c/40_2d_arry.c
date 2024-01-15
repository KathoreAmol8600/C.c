// sum of right daigonal 

#include<stdio.h>
void main()
{
    int arr[2][2]={1,2,9,3};
    // int arr2[3][3]={6,5,6,7,8,9,2,4,6};
    // printf("Enter the Elemnt ..\n");
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
int sum=0;
int sum1=0;
int sum2=0;
int temp=0;
    for(int i=0;i<2;i++)
    {
        sum=0;
        for(int j=0;j<2;j++)
        {
          printf("%d   ",arr[i][j]);
           sum=sum+arr[i][j];
           
        }
         printf("%d",sum);
         printf("\n");
    }
     for(int j=1, i=0;i<2;j--,i++)
        {
           sum2=sum2+arr[i][i]+arr[j][i];  
           printf("%d  ",sum2);
           sum2=0;
        }
       
   
    }
   

          
          
