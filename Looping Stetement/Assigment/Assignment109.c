// A 
// A B
// A B C
// A B C D
// A B C D E
#include<stdio.h>
void main()
{
    char A='A';
    for(int i=1;i<=5;i++)
    {
        A='A';
        for(int j=1;j<=5;j++)
        {
            if((i==j)||i>j)
            printf("%c ",A);
            A++;

        }
        printf("\n");
    }
}