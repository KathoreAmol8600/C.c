#include<stdio.h>
void main()
{
    int aSize=0,isearch=0,flag=0;
    printf("Enter the Size of Arry\n");
    scanf("%d",&aSize);
    int arr[aSize];

    printf("Enter the Element\n");
    for(int i=0;i<aSize;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Element That Want Search");
    scanf("%d",&isearch);
    
     for(int i=0;i<aSize;i++)
    {
        if(arr[i]==isearch)
        {
            flag=1;
        }
    }
    
    if(flag)
    {
        printf("Found it ");
    }else{
        printf(" not Found it ");
    }
}