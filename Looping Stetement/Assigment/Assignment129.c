// * * * * * * * 

// * *       * *

// *   *   *   *

// *     *     *

// *   *   *   * 

// * *       * *

// * * * * * * *

#include<stdio.h>
void main()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            // printf(" * ");
            if(i==1||j==1||i==j||i==7||i+j==8||j==7)
            {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n\n");
    }
}