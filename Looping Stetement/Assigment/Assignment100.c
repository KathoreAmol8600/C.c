//  *  *  *  *  * 
//  *           *
//  *  *  *  *  *

#include<stdio.h>
void main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=5;j++)
        {
            // printf(" * ");
            if((i==1)||(i==3))
            {
                printf(" * ");
            }else if((i==2&&j==1)||(i==2&&j==5))
            {
                printf(" * ");
            }else{
                printf("   ");
            }
       }
            printf("\n");
    }
    
}