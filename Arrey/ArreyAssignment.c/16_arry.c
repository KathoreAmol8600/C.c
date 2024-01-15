//two element whoes sum is closed to zero
#include<stdio.h>
void main()
{
    int arr[10]={38,44,63,-51,-35,19,84,-69,4,-46};
    int clozero=arr[0]+arr[1];
    // printf("%d",clozero);
    int temp=0;
    for(int i=0;i<11-1;i++)
    {
        for(int j=i+1;j<11;j++)
        {
           if(arr[i]>arr[j])
           {
             
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }

    }
    for(int i =0 ;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
}