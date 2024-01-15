//print table
#include<stdio.h>
void main()
{
   int num=0,sum=0;
   printf("enter the Natueral numbaer for the Teable...\n");
   scanf("%d",&num);
   int *ptr=&num;

  printf("Table of %d",num);
  for(int i=0;i<=10;i++)
  {
    printf("%d\n",(*ptr)*i);
  }
}