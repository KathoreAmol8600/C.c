// marge aryyAnd Displey
#include<stdio.h>
void main()
{
    int asize,bsize;
    printf("Enter First Arry size");
    scanf("%d",&asize);

    printf("Enter Scond Arry size");
    scanf("%d",&bsize);

    int csizs=asize+bsize;

    int arr[asize],brr[bsize],crr[csizs];

    for(int i=0,j=0;i<asize;i++,j++)  // first arry
    {
       scanf("%d",&arr[i]);
       crr[j]=arr[i];
    }
    
    for(int i=0;i<bsize;i++)
    {
       scanf("%d",&brr[i]);
       crr[asize]=brr[i];
       asize++;
    }

     for(int i=0;i<csizs;i++)
    {
       printf("%d",crr[i]);
       
    }
        
            
}


    
