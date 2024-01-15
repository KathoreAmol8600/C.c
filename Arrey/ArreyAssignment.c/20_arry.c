//two element whoes sum is closed to zero
#include<stdio.h>
void main()
{
    int arr[10]={38,44,0,-51,0,19,84,-69,0,0};
    int clozero=arr[0]+arr[1];
    // printf("%d",clozero);
    int temp=0;
    for(int i=0;i<10-1;i++)
    {
        for(int j=i+1;j<10;j++)
        {
           if(arr[i]==0)
           {
             
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }

    }
    for(int i =0 ;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}