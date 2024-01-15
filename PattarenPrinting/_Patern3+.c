// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
#include<stdio.h>
void main()
{
    int num=0;
    char A='A';
    for(int i=1;i<=5;i++)
    {
        A='A';
        for(int j=1;j<=i+num;j++)
        {
            if(j<i)
            {
                printf("%c",A);
                A++;
            }else{
                printf("%c",A);
                A--;
            }
        }
        printf("\n");
        num++;
    }
}