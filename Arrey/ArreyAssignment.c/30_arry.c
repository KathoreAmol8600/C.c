#include<stdio.h>
void main()
{
    int  Arr[]={1,3,6,21,4,9,12,3,16,10};
    printf("Enter the length...");
    int len=0;
    scanf("%d",&len);
    int max=0;
    for(int i=0;i<(10-(len-1));i++)
    {
        for(int j=i;j<len+i;j++)
        {
            printf(" %d ",Arr[j]);
            if(Arr[j]>Arr[j+1])
            {
                max=Arr[j];
            }
        }
        
         printf("   -----> %d",max);
        printf("\n");

        
    }
}