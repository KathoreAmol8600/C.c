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
  printf("Even No:\n");
    for(int i=0;i<size;i++)
    {
        if(Arr[i]%2==0)
        {
            printf("%d\n",Arr[i]);
        }
    }

    printf("Odd No:\n");
     for(int i=0;i<size;i++)
    {
        if(Arr[i]%2==1)
        {
            printf("%d\n",Arr[i]);
        }
    }

}