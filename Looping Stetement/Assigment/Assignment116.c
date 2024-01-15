// 1  2  3  4  A  
// 1  2  3  A  B
// 1  2  A  B  C
// 1  A  B  C  D
// A  B  C  D  E  
#include<stdio.h>
void main()
{
    int ino=1;
    char A='A';
    for(int i=1;i<=5;i++)
    {
        A='A';
        ino=1;
        for(int j=1;j<=5;j++)
        {
            // printf(" * ");
            // A='A';
          if(i+j>=6)
          {
            printf("%c  ",A);
            A++;
          }else{
            printf("%d  ",ino);
            ino++;
          }
        }
        printf("\n");
    }
}