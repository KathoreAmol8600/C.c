// missing elemnt 
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr=NULL;
    printf("Enter the Size of arry..");
    int size=0;
    scanf("%d",&size);

    ptr=malloc(sizeof(size));
    printf("ptr..%d",ptr);
    printf("Enter the Elemnt ....\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    int temp=0;
     printf("after the Assemnding the Elemnt ....\n");
    for(int i=0;i<size-1;i++)
    {
     
        for(int j=i+1;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
             ptr[j]=temp;
            }
      }
    }
    //   printf("ptr..%d\n",ptr);
    //   printf("%d\n",ptr[0]);

     for(int i=0;i<size-1;i++)
    {
       for(int j=ptr[i]+1;j<ptr[i+1];j++)
       {
          printf("%d\n",j);

       }
    }
}