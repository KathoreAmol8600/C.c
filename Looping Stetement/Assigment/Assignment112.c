// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include<stdio.h>
void main()
{
    int ino=1;
    for(int i=1;i<=5;i++)
    {
           ino=1;
        for(int j=1;j<=5;j++)
        {
            if((i==j)||i>j)
            {
            printf("%d ",ino);
            ino++;
            }
            

        }
        // if((i==j)||i>j)
        // A++;
        printf("\n");
    }
}