//arey in asending or dessending 
#include<stdio.h>
void main()
{
    int arr[5]={1,4,5,2,3,};
    int *ptr=NULL;
    ptr=arr;
    // printf("%d",*(ptr+1));
    // printf("%d",ptr[1]);
    int temp=0;
    printf("Sorted arry...\n");
    for(int i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp=*(ptr+i);
              *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
   
        printf("min Elemnt is ...%d\n",*(ptr+0));
        printf("max Elemnt is ...%d\n",*(ptr+5-1));
    
}