    
 //            1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17
 //    1   //  *  *  *  *  *  *  *  *  1  *  *  *  *  *  *  *  * 

 //    2   //  *  *  *  *  *  *  *  2  *  2  *  *  *  *  *  *  *

 //    3   //  *  *  *  *  *  *  3  *  3  *  3  *  *  *  *  *  *

 //    4   //  *  *  *  *  *  4  *  4  *  4  *  4  *  *  *  *  *

 //    5   //  *  *  *  *  5  *  5  *  5  *  5  *  5  *  *  *  *


            //               1
            //           2  *  2
            //        3  *  3  *  3
            //     4  *  4  *  4  *  4
            //  5  *  5  *  5  *  5  *  5

#include<stdio.h>
void main()
{
    int L=1;
    int count=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=17;j++)
        {
            // printf(" * ");
            if((j>=10-i)&&(j<=8+i))
            {
                if(count%2!=0)
                {
                 printf(" %d ",L);
                   count=1;
                }else{
                    printf(" * ");
                }
                 count++;
                // printf(" %d ",L);
            }else{
                printf("   ");
                count=1;
            }
        
        }
        printf("\n");
        L++;
    }
}