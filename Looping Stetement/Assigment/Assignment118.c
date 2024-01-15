//           *  *  *  * 
//        *  *  *  *
//     *  *  *  *
//  *  *  *  *

#include<stdio.h>
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            // printf(" * ");
            if((i+j>=5)&&(i+j<=8))
            { 
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}