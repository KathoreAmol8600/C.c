//mejoritey elemnt of arry
// number is 4 count is 3
// number is 6 count is 1
// number is 8 count is 1
#include<stdio.h>
void main()
{
    int arr[5]={4,4,5,6,8};
    int count=1;
    int max;
    // scanf("%d",&value);
    for(int i=0;i<5;i++)
    {
        count=1;
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
               count++;
               i++;
            }
        }

        printf("number is %d count is %d\n",arr[i],count);
    }

}