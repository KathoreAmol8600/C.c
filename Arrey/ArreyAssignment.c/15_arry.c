//next gretaer elemnt in arry
#include<stdio.h>
void main()
{
    int arr[6]={2,4,10,9,13};
    int *ptr=NULL;
    ptr=arr;
    int elemt=0;
    int max=0;
    for(int i=0;i<5;i++)
    {
        // elemt=*(ptr+i);
        elemt=ptr[i];
        for(int j=i+1;j<6;j++)
        {
            if(ptr[j]>elemt)
            {
                max=ptr[j];
                break;
            }
        }
        printf("next bigger elemt of %d int arry is %d\n",ptr[i],max);
        
    }
}