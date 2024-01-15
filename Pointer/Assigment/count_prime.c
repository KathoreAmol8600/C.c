//arey in asending or dessending 
#include<stdio.h>
void main()
{
    int arr[5]={13,3,6,7,11};
    int *ptr=NULL;
    ptr=arr;
    // printf("%d",*(ptr+1));
    // printf("%d",ptr[1]);
    int count=0;
    int primecou=0;
    for(int i=0;i<5;i++)
    {
        
        for(int j=2;j<ptr[i];j++)
        {
            if(arr[i]%j==0)
            {
                count++;
            }

        }
        // if(count==0)
        // {
        //    primecou++;
        // }
    }

    printf("total number of the prime num is..%d",count);
}