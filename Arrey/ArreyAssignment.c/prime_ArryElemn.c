#include<stdio.h>
void main()
{
    int asize=0,Flag=1;
    printf("Enter the size of arry..\n");
    scanf("%d",&asize);
    int Arr[asize];
    // enter the element
    for(int i=0;i<asize;i++)
    {
        scanf("%d",&Arr[i]);
    }
    // check prime or not 
    for(int i=0;i<asize;i++)
    {
        Flag=1;
        for(int j=2;j<=Arr[i]/2;j++)
        {
            if(Arr[i]%j==0)
            {
                Flag=0;
                break;
            }
        }
        if(Flag)
        {
            printf("%d\n",Arr[i]);
        }
    }
}