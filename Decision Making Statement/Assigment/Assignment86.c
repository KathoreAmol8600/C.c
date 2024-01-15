//  Write a C program to print Fibonacci series up to n terms

#include<stdio.h>
void main()
{
    int ino=0,ino2=0,ino3=1,i=1,Fibo;
    printf("Enter the numbar");
    scanf("%d",&ino);
    printf("%d %d",ino2,ino3);

    while(i<ino)
    {
    Fibo=ino2+ino3;             // 0 ,1
    printf(" %d ",Fibo);          
    ino2=ino3;
    ino3=Fibo;
        i++;
    }
}