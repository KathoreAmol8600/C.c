//print sum of even num
#include<stdio.h>
void main()
{
   int nth=0,sum=0;
   printf("enter the Natueral numbaer...\n");
   scanf("%d",&nth);
   int *ptr=&nth;

  while(*ptr>0)
  {
   if(*ptr%2==0)
    sum=sum+nth;

    --*ptr;

  }
  printf("sum of oll Even nuber number to nth value %d",sum);
}