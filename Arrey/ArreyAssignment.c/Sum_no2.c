#include<stdio.h>
void main()
{
    printf("Enter the Size ");
    int asize;
    scanf("%d",&asize);
    int arr[asize];

    for(int i=0;i<asize;i++)
    {
        scanf("%d",&arr[i]);
    }

printf(".....................\n");
int sum=0;
     for(int i=0;i<asize;i++)
    {
        sum=sum+arr[i];
    }

    printf("Sum is %d",sum);
}