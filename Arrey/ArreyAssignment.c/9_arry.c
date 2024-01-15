//paier the given sum of arry
// 15
// paier is 8 and 7
#include<stdio.h>
void main()
{
    int arr[5]={6,8,4,-5,7};

    int value;
    scanf("%d",&value);
    for(int i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==value)
            {
                printf("paier is %d and %d",arr[i],arr[j]);
                break;
            }
        }
    }

}