// 1    
// 12
// 1 2
// 1  2
// 12345
#include<stdio.h>
void main()
{
    int ino=1;
    for(int i=1;i<=5;i++)
    {
        ino=1;
        for(int j=1;j<=5;j++)
        {
            // printf(" * ");
           if(i==j||i==5||j==1)
           {
            printf("%d",ino);
            ino++;
           }else
           {
            printf(" ");
           }
        }
        printf("\n");
    }
}

