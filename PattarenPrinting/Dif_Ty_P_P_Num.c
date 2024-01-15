#include<stdio.h>
void main()
{
    int ino=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=9;j++)
        {
            // printf(" * ");
            if(j>=6-i&&j<=4+i)
            {
                printf(" %d ",ino);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}