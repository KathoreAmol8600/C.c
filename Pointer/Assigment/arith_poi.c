#include<stdio.h>
void main()
{
    int ino=10;
    int ino2=20;
    int sum=0;

    int *ptr=&ino;
    int *ptr2=&ino2;
    sum=*ptr+*ptr2;
    
    printf("addition is %d",sum);

}