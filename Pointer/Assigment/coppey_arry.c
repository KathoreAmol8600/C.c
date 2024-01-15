#include<stdio.h>
void main()
{
    printf("Enter the size of arry");
    int isize=0;
    scanf("%d",&isize);
    int arr[isize];
    int arr1[isize];
    int *ptr=arr;
    int *ptr1=arr1;
    //  printf("%d",ptr1[2]);

    for(int i=0;i<isize;i++)
    {
        scanf("%d",&ptr[i]);
         ptr1[i]=ptr[i];
    }
    
    printf("Second ary copped...\n");
    for(int i=0;i<isize;i++)
    {
        printf("%d\n",ptr1[i]);
    }
    
}