#include<stdio.h>
void main()
{
    printf("Enter the Size...");
    int size=0;
    scanf("%d",&size);
    int Arr[size];

    for(int i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("Element is ......\n");
     for(int i=0;i<size;i++)
    {
        printf("%d\n",Arr[i]);
    }

     printf("Enter the index that want delate Elemnt\n");
    int index=0;
    scanf("%d",&index);

    Arr[index]=0;

     printf("After the Delating elemnt ......\n");
    for(int i=0;i<size;i++)
    {
        printf("index of %d--->Value s%d\n",i,Arr[i]);
    }

}