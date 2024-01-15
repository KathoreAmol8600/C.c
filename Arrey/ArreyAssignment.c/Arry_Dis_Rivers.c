#include<stdio.h>
void main()
{
    int aSize=0,flag=0;
    printf("Enter the Size of Arry\n");
    scanf("%d",&aSize);
    int arr[aSize];

    printf("Enter the Element\n");
    for(int i=0;i<aSize;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Riverse Element is \n");
     for(int i=(aSize-1);i>=0;i--)
    {
       printf("%d\n",arr[i]);
    }
    
    
}