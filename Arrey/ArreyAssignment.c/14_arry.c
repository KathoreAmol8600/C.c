// smollest missing num is 
// 2
// 5
// 6
// 7
// Smollest num is 1
#include<stdio.h>
void main()
{
    int asize=5;
    int arr[asize];
    scanf("%d",&arr[0]);
    int Temp=0;

   for(int i=1;i<asize;i++)
   {
     scanf("%d",&arr[i]);
      for(int j=0;j<i;j++)
      {
        if(arr[i]<arr[j])
        {
            Temp=arr[j];
            arr[j]=arr[i];
            arr[i]=Temp;
        }
      }
   }
   int count=0;
   int value=0;
   for(int i=0;i<asize-1;i++)
   {
     value=arr[i+1]-arr[i];
    for(int j=i+1;j<asize;j++)
    {
        if(value>1)
        {
            printf("Smollest num is %d",arr[i]+1);
            count++;
            break;
        }
    }
    if(count==1)
    {
        break;
    }
   }

}
