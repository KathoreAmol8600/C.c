#include<stdio.h>
void main()
{
    int asize;
    scanf("%d",&asize);
    int arr[asize];

    for(int i=0;i<asize;i++)
    {
        scanf("%d",&arr[i]);
    }

printf(".....................");
     for(int i=0;i<asize;i++)
    {
        printf("%d\n",arr[i]);
    }
}