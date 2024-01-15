#include<stdio.h>
void main()
{
     int asize,bsize,csize;
    printf("Enter the Arr size\n"); 
    scanf("%d",&asize);

    printf("Enter the Arr size\n"); 
    scanf("%d",&bsize);
    
    csize=asize+bsize;
    
    int arr[asize],brr[bsize],crr[csize];
    printf("Enter the arr elemt ..\n");
    for(int i=0;i<asize;i++)
    {
        scanf("%d",&arr[i]);
        crr[i]=arr[i];
    }
     printf("Enter the brr elemt ..\n");

    for(int i=0;i<bsize;i++)
    {
        scanf("%d",&arr[i]);
        crr[asize++]=arr[i];
    }
    printf("asu val%d",asize);
    printf(" Displey of crr ..\n");
    for(int i=0;i<csize;i++)
    {
        printf("%d\n",crr[i]);
    }
}