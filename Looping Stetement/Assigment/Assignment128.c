//              *

//           *  *  *

//        *     *     *

//     *        *        *

//  *  *  *  *  *  *  *  *  *

//     *        *        *

//        *     *     *

//           *  *  *

//              *
#include<stdio.h>
void main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            // printf(" * ");
            if((i==5)||(j>=4+i&&j<=4+i&&i<=5)||(j>=14-i&&j<=14-i&&i>=6)||(j<=6-i&&j>=6-i&&i<=5)||(j<=i-4&&j>=i-4&&i>=6)||j==5)
            {
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n\n");
    }
}