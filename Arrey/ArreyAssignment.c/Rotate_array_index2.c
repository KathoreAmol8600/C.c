#include<stdio.h>
void main()
{
    int asize=0;
    printf("Enter the Numb..\n");
    scanf("%d",&asize);
    int Arr[asize];

    printf("Enetr the element\n");
    for(int i=0;i<asize;i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter the Index..\n");
    int index=0;
    scanf("%d",&index);

    printf("rivere element is..\n");
    for(int i=index;i<asize;i++)
    {
        printf("%d\n",Arr[i]);
    }

     for(int i=0;i<index;i++)
    {
        printf("%d\n",Arr[i]);
    }
}