//  1  2  3  4  5 
//  2        3
//  3     4
//  4  5
//  5
#include<stdio.h>
void main()
{
    int ino=1;
    for(int i=1;i<=5;i++)
    {
         ino=i;
        for(int j=1;j<=5;j++)
        {
            // printf(" * ");
            if(i+j==6||i==1||j==1)
            {
                printf(" %d ",ino);
                ino++;
            }else
            {
                printf("   ");
            }
           
        }
        printf("\n");
        // ino=i;
    }
}
 