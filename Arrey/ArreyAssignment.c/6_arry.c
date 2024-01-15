// maerge two desending two sorted arry
// 5544332211   this is arry 3
#include<stdio.h>
void main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int arr3[10];
    for(int i=0;i<5;i++)
    {
      arr3[i]=arr1[i];
      arr3[5+i]=arr2[i];
    }
    int temp=0;
   for(int i=0;i<10-1;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr3[i]<arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
      printf("%d",arr3[i]);
    }
    
}