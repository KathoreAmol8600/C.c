#include<stdio.h>
void main()
{
    int ino=1;
    int num=0;
    for(int i=1;i<=5;i++)
    {
        ino=1;
        for(int j=1;j<=num+i;j++)
        {
            if(j<i)
            {
                printf("%d",ino);
                ino++;
            }else
            {
                 printf("%d",ino);
                ino--;
            }
        }
        printf("\n");
        num++;
    }
}