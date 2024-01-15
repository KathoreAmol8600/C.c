// even or odd two difernt arry

#include<stdio.h>
void main()
{
    int arr1[5];
    int arr2[5];
    int arr3[10]={1,2,3,4,5,6,10,8,9,7};
    int temp=0;
   for(int i=0;i<10-1;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr3[i]>arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
       int j=0;
       int k=0;
        for(int i=0;i<10;i++)
        {
            if(arr3[i]%2==0)
            {
                arr1[j]=arr3[i];
                j++;
            }else{
                arr2[k]=arr3[i];
                k++;
            }
        }

    printf(" Even number is ");
        for(int i=0;i<5;i++)
        {
            printf("%d",arr1[i]);
        }
    printf("\nodd numbaer is ");
        for(int i=0;i<5;i++)
        {
            printf("%d",arr2[i]);
        }

}