// [0,1] 3 4
// [0,5] 3 4 -7 1 3 3
// [3,5] 1 3 3
// [4,6] 3 3 1
#include<stdio.h>
void main()
{
    int arr[]={3,4,-7,1,3,3,1,-4};
    printf("Enter the Elment of sum is \n");
    int num=0;
    scanf("%d",&num);
    int sum=0;
    int count=0;
    for(int i=0;i<8;i++)
    {
        count=i;
        sum=0;
        // printf("%d",i);
        for(int j=i;j<8;j++)
        {
            sum=sum+arr[j];
            count++;
            if(sum==num)
            {
                printf("[%d,%d] ",i,count-1);
               for(int k=i;k<=count-1;k++)
               {

                printf("%d ",arr[k]);
               }
               printf("\n");
            }
        }
    }
}