#include<stdio.h>

void main()
{
    int Size;
    int Sum=0;
    printf("Enterr the Size of Arry");
    scanf("%d",&Size);
    
    int Arr[Size];

    printf("Enter the Element");

    for(int i=0;i<Size;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(int i=0;i<Size;i++)
    {
        Sum=Sum+Arr[i];
    }
    printf("%d",Sum);
}