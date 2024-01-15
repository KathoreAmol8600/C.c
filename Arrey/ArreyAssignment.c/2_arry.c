// sum of oll element
#include<stdio.h>
void main()
{
   int size=5;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }

    printf("Sum of oll elemt is %d",sum);
}