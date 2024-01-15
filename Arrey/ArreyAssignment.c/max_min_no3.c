#include<stdio.h>
void main()
{
    printf("enter the size of Arr\n");
    int asize=0;
    scanf("%d",&asize);
    int arr[asize];

    for(int i=0;i<asize;i++)
    {
        scanf("%d",&arr[i]);
    }

int max=arr[0];
int min=arr[0];
     for(int i=0;i<asize;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<max)
        {
            min=arr[i];
        }

        
    }

    printf("max is %d min is %d",max,min);
}

