#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i+j>=6)
            {
                if(i%2==0)
                printf(" * ");
                else{
                    printf(" # ");
                }
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=5;j++)
    //     {
    //         if(i+j<=6)
    //         {
    //             if(i%2==0)
    //             printf(" * ");
    //             else{
    //                 printf(" # ");
    //             }
    //         }else{
    //             printf("   ");
    //         }
    //     }
    //     printf("\n");
    // }
}