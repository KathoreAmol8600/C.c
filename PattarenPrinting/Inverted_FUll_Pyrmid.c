// * * * * * * 
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
#include<stdio.h>
void main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            // printf(" * ");
            if(j>=i)
            {
                printf("*");
                printf(" ");
            }else{
                printf(" ");
                
            }
        }
        printf("\n");
    }
}
 