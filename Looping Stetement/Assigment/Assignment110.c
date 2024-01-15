// A 
// B C
// D E F
// G H I J
// K L M N O
#include<stdio.h>
void main()
{
    char A='A';
    for(int i=1;i<=5;i++)
    {
    
        for(int j=1;j<=5;j++)
        {
            if((i==j)||i>j)
            {
            printf("%c ",A);
            A++;
            }
            

        }
        // if((i==j)||i>j)
        // A++;
        printf("\n");
    }
}