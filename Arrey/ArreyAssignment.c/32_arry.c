// remove the Duplicate elemnt  is 
#include<stdio.h>
void main()
{
    int arr[]={1,2,5,1,7,2,4,2};
    int size=8;
    int temp=size;
//rearrangr v=(1,2,5,7,4)
   for(int i=0;i<temp;i++)
   {
        for(int j=i+1;j<temp;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=0;
            
            }

        }
   }
    printf("size%d",size);
    int temp2=0;
    for(int i=0;i<10-1;i++)
    {
        for(int j=i+1;j<10;j++)
        {
           if(arr[i]==0)
           {
             
            temp2=arr[i];
            arr[i]=arr[j];
            arr[j]=temp2;
           }
        }

    }
      printf("size%d",size);

//    for(int i=0;i<size;i++)
//    {
//     printf("%d\n",arr[i]);
//    }

}