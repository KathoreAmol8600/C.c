#include<stdio.h>
void main()
{
    printf("Enter the size of arry");
    int isize=0;
    scanf("%d",&isize);
    int arr[isize];
    int *ptr=arr;
    int sum=0;
    for(int i=0;i<isize;i++)
    {
        scanf("%d",&ptr[i]);
         if(ptr[i]%2==0)
         {
            printf("%d is Even\n",ptr[i]);
         }else{
             printf("%d is odd\n",ptr[i]);
         }
    }
   
    
}