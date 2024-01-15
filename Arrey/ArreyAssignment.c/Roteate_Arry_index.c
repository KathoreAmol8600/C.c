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
    int start=index;

    printf("Riverse Arry is...\n");
    for(int i=0;i<2;i++)
    {
        if(i==1)
        {
            start=0;
            asize=index;
        }
        for(int j=start;j<asize;j++)
        {
            printf("%d\n",Arr[j]);
        }
    }
    
}