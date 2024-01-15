// -4 8 -5 5 -6 7 -9 1 -21 19 -11 
//   areange arry in spesifi order
#include<stdio.h>
void main()
{
    int arr[]={-4,8,-5,-6,5,9,7,1,-21,11,19};
    int temp=0;
    for(int i=0;i<11;i++)
    {
    if(i%2==0)
    {
    if(arr[i]>0)
    {
    temp=arr[i];
    for(int j=i+1;j<11;j++)
    {
    if(arr[j]<0)
    {
        arr[i]=arr[j];
        arr[j]=temp;
        break;
    }
}

    }
    }else
    {
        if(arr[i]<0)
    {
    temp=arr[i];
    for(int j=i+1;j<11;j++)
    {
        if(arr[j]>0)
        {
            arr[i]=arr[j];
            arr[j]=temp;
            break;
        }
    }

    }
    }
    }

    for(int i=0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
}