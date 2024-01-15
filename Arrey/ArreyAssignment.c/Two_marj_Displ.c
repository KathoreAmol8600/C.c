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

    for(int i=0;i<csizs;i++)
    {
        if(i<asize)                                   
            {
            for(int j=0;j<asize;j++)
                {
                    scanf("%d",&arr[j]);
                    crr[i]=arr[j];
                    i++;
                }
            }
        else{
            i=0;
             for(int k=asize;k<csizs;k++)
                {
                    scanf("%d",&brr[i]);
                    crr[k]=brr[i];
                }
            }
            
    }


    
}