#include<stdio.h>

int main()
{
    int ino=0;
   scanf("%d",&ino);
    for(int i=1;i<=ino;i++)
    {
        printf("%d ",i);
    }
    for(int i=0;i>=(-ino);i--)
    {
        printf("%d ",i);

    }

    return 0;
}