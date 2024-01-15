// rotet arry by N position 
#include<stdio.h>
void main()
{
    int arr[11]={0,3,6,9,12,14,18,20,22,25,27};
    int pos=0;
    printf("Enter the nth number\n");
    scanf("%d",&pos);
    int temp=0;
    int zero=0;
    for(int i=0;i<pos;i++)
    {
        
        temp=arr[zero];
        for(int j=0;j<11;j++ )
        {
            arr[j]=arr[j+1];
        }
        arr[11-1]=temp;

        
    }
    for(int i=0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
}