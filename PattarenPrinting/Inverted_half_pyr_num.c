//  1  2  3  4  5 
//  1  2  3  4
//  1  2  3
//  1  2
//  1
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
           if(i+j<=6)
           {
            // printf(" * ");
            printf(" %d ",ino);
            ino++;
           }
        }
        printf("\n");
    }
}