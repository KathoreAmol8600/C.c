#include<stdio.h>
void main()
{
    printf("Enter the Size ");
    int asize;
    scanf("%d",&asize);
    int arr[asize];

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

   printf("Enter the value for celing and flower\n");
   int uvalue=0;
   scanf("%d",&uvalue);

   int minval=arr[0];
   int maxval=arr[asize-1];

   if(uvalue<minval||uvalue>maxval)
    {
        if(arr[0]>uvalue)
        {
          printf("celling  -> %d\n",arr[0]);
          printf("floer   -> -1\n");
        }

        if(arr[asize-1]<uvalue)
        {
          printf("floer -> %d\n",arr[asize-1]);
          printf("celing   -> -1\n");
        }
    }

  if((uvalue>minval)&&(uvalue<maxval))
  {
    for(int i=0;i<asize;i++)
      {
        if((uvalue>minval)&&(uvalue<maxval))
        {
          if(arr[i]==uvalue)
          {
            printf("mid1 celling ->%d\n",arr[i]);
            printf("mid1 flooer ->%d\n",arr[i]);
            break;
          }
            if(arr[i]>uvalue)
          {
            printf("mid2 celling ->%d\n",arr[i]);
            printf(" mid2 flooer ->%d\n",arr[i-1]);
            break;
          }
        }
      }
  }
}


    
