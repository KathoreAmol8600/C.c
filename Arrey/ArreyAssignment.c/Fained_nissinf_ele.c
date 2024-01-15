#include<stdio.h>
void main()
{
    int aSize=5,isearch=0,flag=0;
    printf("Enter the Size of Arry\n");
    scanf("%d",&aSize);
    int arr[aSize];
     int len=sizeof(arr)/sizeof(arr[0]);
     printf("\n length=%d",len);
    printf("Enter the Element\n");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Asending 
    int  temp=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }

     printf("Assending ");
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
    

    //missing Numbaer
    printf("\nMissing number");
//    for(int i=0;i<len;i++)
//    {
//         for(int j=arr[i]+1;j<arr[i+1];j++)
//         {
//            printf("%d\t",j);
            
//         }
//    }
for(int i=0;i<len;i++)
{

    int a=arr[i];
    int b=arr[i+1];
    if(b-a>1)
    {
        for(int j=arr[i]+1;j<arr[i+1];++j)
        {
            if(j<arr[i+1])
            printf("%d",j);
            else
            break;

        }
    }
}
}