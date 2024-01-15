#include<stdio.h>
void main()
{
    char A='A';
    int ino=1;
    for(int i=1;i<=5;i++)
    {    
        for(int j=1;j<=5;j++)
        {
            if(i%2==0){
               printf("%c    ",A);
                 A++;
            }else
            {
                 printf("%d    ",ino);
                 ino++;
            }
        }
        printf("\n");
    }
}