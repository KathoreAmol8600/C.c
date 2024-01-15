//              *
//           *  *  *
//        *  *  *  *  *
//     *  *  *  *  *  *  *
//  *  *  *  *  *  *  *  *  *
#include<stdio.h>
void main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(((j>=7-i)&&(j<=7-i))||(j<=4+i)&&(j>=4+i)||i==5)
            {
            printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}