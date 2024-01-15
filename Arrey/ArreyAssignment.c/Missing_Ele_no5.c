#include<stdio.h>
void main()
{
    printf("Enter the Size ");
    int asize;
    scanf("%d",&asize);
    int arr[asize];

    for(int i=0;i<asize;i++)
    {
        scanf("%d",&arr[i]);
    }

printf(".....................\n");

     for(int i=0;i<asize;i++)
    {
       printf("%d\n",arr[i]);
    }

    printf("Assending Order ......\n");
    int temp=0;
     for(int i=0;i<asize-1;i++)
    {
      for(int j=i+1;j<asize;j++)
      {
        if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
      }
        
    }

      for(int i=0;i<asize;i++)
    {
       printf("%d\n",arr[i]);
    }

    printf("\nMissing Elemnt.........\n" );
    int dif=0;
     for(int i=0;i<asize;i++)
    {
        dif=arr[i+1]-arr[i];
        if(dif>1)
        {
            for(int j=arr[i];j<arr[i+1];j++)
            {
                printf("%d",j);
            }
        }

       
    }

    
}