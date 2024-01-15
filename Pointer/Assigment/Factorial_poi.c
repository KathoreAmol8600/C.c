#include<stdio.h>
void main()
{
    int arr[5];
    int *ptr=NULL;
    ptr=arr;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    int fact=1;
    for(int i=0;i<5;i++)
    {
        printf("elemnr%d\n",ptr[i]);
        fact=1;
        for(int j=ptr[i];j>0;j--)
        {
            fact=fact*j;
            
           
        }

        // break; printf("fact of %d",fact);
        printf("fact of %d",fact);
    }
    //  printf("fact of %d",fact);
}