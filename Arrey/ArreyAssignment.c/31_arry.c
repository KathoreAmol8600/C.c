// sort arry like this 
// Removing the dublicate elemnt ....and Replase zero---->0 6 0 3 0 0 14 0 0 9
// Entering the zero elemnt at end ---->6 3 14 9 0 0 0 0 0 0
#include<stdio.h>
void main()
{
    int arr[]={0,3,3,3,0,0,7,7,0,9};
    int size=10;
//rearrangr v=(6,3,14,9,0,0,0,0,0,0)
printf("\nRemoving the dublicate elemnt ....and Replase zero---->");
    int temp1=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size-1;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[i]+arr[i];
                arr[j]=0;
            }
        }
    }
     for(int i =0 ;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEntering the zero elemnt at end ---->");
     int temp=0;
    for(int i=0;i<size-1;i++)
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
     for(int i =0 ;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}