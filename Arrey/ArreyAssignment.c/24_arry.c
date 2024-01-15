//spesipic diffreanse
#include<stdio.h>
void main()
{
    int arr[8]={5,2,3,7,6,4,9,8};
    int clozero=arr[0]+arr[1];
    // printf("%d",clozero);
    int temp=0;
    int count=0;
    int value=0;
    for(int i=0;i<10-1;i++)
    {
        count=0;
        for(int j=i+1;j<10;j++)
        {
           if(arr[i]+arr[0]==arr[j])
           {
            value=arr[j];
            count++;
             break;
           }
        }
        if(count==1)
        {
          printf("distanse paer of difreanse of %d ->[%d, %d]\n",arr[0],arr[i],value);
        }

    }
}