#include<stdio.h>
#include<stdlib.h>
void main()
{
      int *ptr=NULL;
      int size=5;
      ptr=malloc(sizeof(int));
      for(int i=0;i<size;i++)
      {
        // scanf("%d",ptr[i]);
        scanf("%d",ptr+i);
      }
      for(int i=0;i<size;i++)
      {
        // scanf("%d",ptr[i]);
        printf("%d",*(ptr+i));
      }
      int max;

      for(int i=0;i<size;i++)
      {
        if(ptr[i]>ptr[i+1])
        {
           max=ptr[i];
        }
      }

      printf("Max value is %d",max);
}