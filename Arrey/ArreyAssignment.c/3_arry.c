// maxzimaum and minimum os arry
#include<stdio.h>
void main()
{
    int asize=5;
    int arr[asize];
    // elemt enter the arry
    for(int i=0;i<asize;i++)
    {
        scanf("%d",&arr[i]);
    }

    // sorting arry
   
    int Temp=0;
    for(int i=0;i<asize-1;i++)
    {
        for(int j=i+1;j<asize;j++)
        {
            if(arr[i]>arr[j])
            {
                Temp=arr[i];
                arr[i]=arr[j];
                arr[j]=Temp;
            }
        }
    }
   
    printf("Max is -> %d\n",arr[0]);
    printf("min is -> %d\n",arr[asize-1]);
}