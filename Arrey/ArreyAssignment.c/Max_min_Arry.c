#include<stdio.h>
void main()
{
    int size=0;
    printf("Enter the Arry of Size..\n");
    scanf("%d",&size);
    int Arr[size];

   printf("Enter the Element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
    int Max=Arr[0];
    int Min=Arr[0];
    for(int i=0;i<size;i++)
    {
         if(Arr[i]>Max)
         {
            Max=Arr[i];
         }
         if(Arr[i]<Min)
         {
            Min=Arr[i];
         }
    }
    printf("Max Element is %d\n",Max);
    printf("MinElement is %d",Min);


}