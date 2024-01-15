//two element whoes sum is closed to zero
#include<stdio.h>
void main()
{ 
    printf("Enter the size ...\n");
    int asize=0;
    scanf("%d",&asize);
    int arr[asize];
    int Temp=0;

    printf("Enter the Elemnt ...\n");
      for(int i=0;i<asize;i++)
        {
            scanf("%d",&arr[i]);
        }

    printf("Displey the Elemnt ...\n");
     for(int i=0;i<asize;i++)
    {
        printf("%d",arr[i]);
    }

    for(int i=0;i<asize;i++)
    {
        for(int j=i+1;j<asize;j++)
        {
            if(arr[i]>arr[j])
            {
                Temp=arr[i];
                arr[i]=arr[j];
                arr[j]=Temp;
            }
        }
       
    }
    printf("\nAfter thr Sorting Elemnt is\n");
     for(int i=0;i<asize;i++)
        {
            printf("%d",arr[i]);
        }
   
    int count=0,count2=0,max=0;
    int value=0;
    for(int i =0 ;i<5;i++)
    {
        count=0;
        for(int j=0;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        // printf("%d\n",count);
        if(count>max)
        {
            max=count;
            value=arr[i];
        }
    }
     printf(" \nvalue is %d count is %d",value,max);
}