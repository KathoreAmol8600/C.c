#include<stdio.h>
void main()
{
    printf("Enter the size of arry");
    int isize=0;
    scanf("%d",&isize);
    int arr[isize];
    int *ptr=arr;
    //  printf("%d",ptr1[2]);
    int sum=0;
    for(int i=0;i<isize;i++)
    {
        scanf("%d",&ptr[i]);
         sum=sum+ptr[i];
    }
   printf("Addition is %d",sum);
    
}