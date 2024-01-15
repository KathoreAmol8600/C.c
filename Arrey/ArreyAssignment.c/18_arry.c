//intehger x appers more than n/2 times in sorted arry
#include<stdio.h>
void main()
{
    int arr[10]={4,4,63,4,-35,4,4,-69,44,-46};
    int clozero=arr[0]+arr[1];
    // printf("%d",clozero);
    int temp=0;
    for(int i=0;i<10-1;i++)
    {
        for(int j=i+1;j<10;j++)
        {
           if(arr[i]>arr[j])
           {
             
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }

    }
    int count=1;
    for(int i =0 ;i<11-1;i++)
    {
        count=1;
       for(int j=i+1;j<11;j++)
       {
        if(arr[i]==arr[j])
        {
            count++;
        }
       }
       if(count>=10/2)
       {
        printf("%d apper moer than or equal to  %d timein givana aary",arr[i],count);
        break;
       }
       
    }
}