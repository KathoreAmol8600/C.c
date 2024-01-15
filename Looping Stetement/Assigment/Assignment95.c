#include<stdio.h>
void main()
{
    char A='A';
    for(int i=1;i<=5;i++)
    {    A='A';
        for(int j=1;j<=5;j++)
        {
            printf("%c ",A);
                A++;
        }
        printf("\n");
    }
}