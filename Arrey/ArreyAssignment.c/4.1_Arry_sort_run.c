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
printf("Amol\n");
   for(int i=0;i<asize;i++)
   {
     printf("%d\n",arr[i]);
   }
}
