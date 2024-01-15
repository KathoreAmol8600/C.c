//      *     
//     * *
//    *   *
//   *     *
//  *       *
// * * * * * *
#include<stdio.h>
void main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=11;j++)
        {

            // printf(" * ");
            if(j==7-i||(i>1&&j==5+i))
            {
                printf("*");
            }else if(i==6)
            {
                if(j%2!=0)
                {
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
 