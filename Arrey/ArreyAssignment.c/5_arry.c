//missing Element in sorted arry
#include<stdio.h>
void main()
{
    int asiz=5;
    int arr[asiz];
    printf("Enter the Elet ....\n");
    for(int i=0;i<asiz;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted arry...\n");
    int temp=0;
    for(int i=0;i<asiz-1;i++)
    {
        for(int j=i+1;j<asiz;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int start=0;
    int end=0;
    for(int i=0;i<asiz-1;i++)
    {
        start=arr[i];
        end=arr[i+1];
        for(int j=start+1;j<end;j++)
        {
           printf("%d",j);
        }
      
    }
    
}