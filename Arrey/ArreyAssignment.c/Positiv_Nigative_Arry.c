#include<stdio.h>
void main()
{

    printf("Enter the Arry Size..\n");
    int size=0;
    int Arr[size];
    scanf("%d",&size);

    for(int i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
  printf("Posite no:\n");
    for(int i=0;i<size;i++)
    {
        if(Arr[i]>0)
        {
            printf("%d\n",Arr[i]);
        }
    }

    printf("Nigative no:\n");
     for(int i=0;i<size;i++)
    {
        if(Arr[i]<0)
        {
            printf("%d\n",Arr[i]);
        }
    }

}