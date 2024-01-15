#include<stdio.h>
void main()
{
    printf("Enter the Size \n");
    int asize;
    int temp=0;
    scanf("%d",&asize);
    temp=asize;
    int arr[asize];
       printf("arry size is ...%d\n",asize);

    printf("Enter the Elemnt ...\n");
    for(int i=0;i<asize;i++)
      {
          scanf("%d",&arr[i]);
      }

   printf("befor the sorting.....\n");

    for(int i=0;i<asize;i++)
      {
        printf("%d\n",arr[i]);
      }

    printf("sorting arry ......\n");
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
int temp2=asize;
      printf("delating the Elemnt ....\n");
     for ( int i = 0; i < asize; i ++)  
    {  
        for ( int j = i + 1; j < asize; j++)  
        {  
            if ( arr[i] == arr[i+1])  
            {  
                for ( int k = i; k < asize - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                asize--; 
                i--;      
            }  
        }  
    } 
     printf("After the Delate the Dublicate num..\n");
      for(int i=0;i<asize;i++)
      {
        printf("%d\n",arr[i]);
      }
      printf("arry size is ...%d",asize);
     
}

