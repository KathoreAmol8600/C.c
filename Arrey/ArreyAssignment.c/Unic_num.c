#include<stdio.h>
void main()
{
    printf("Enter the size of Arry...\n");
    int asize=0;
    scanf("%d",&asize);
    int arr[asize];
    printf("Enter the Numbaer.....\n");
    for(int i=0;i<asize;i++)
    {
        scanf("%d",&arr[i]);
    }

    int elemt=0;
    int count=0;
    printf("UnicNumbaer is.....\n");
    for(int i=0;i<asize;i++)
    {
        elemt=arr[i];
        count=0;
        for(int j=0;j<asize;j++)
        {
            if(arr[j]==elemt)
            {
                count++;
                break;
            }
        }
        if(count==1)
        {
            printf("%d\n",arr[i]);
        }
    }
}