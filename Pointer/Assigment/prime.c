#include<stdio.h>
void main()
{
    int arr[10]={12,13,14,16,18,20,22,24,77,75};
    int count=0;
    for(int i=0;i<10;i++)
    {
        count=0;
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d\n",arr[i]);
        }
    }
}