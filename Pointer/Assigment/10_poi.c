// count number of degit
#include<stdio.h>
void main()
{
    int ino=0;
    printf("Enter the Number");
    scanf("%d",&ino);
    int *ptr=&ino;
    int count=0;
    for(int i=*ptr;i>0;i=i/10)
    {
      count++;
    }
    printf("Number of diget is %d",count);

}