//print oll natueral sum bit nth term
#include<stdio.h>
void main()
{
   int nth=0,sum=0;
   printf("enter the Natueral numbaer...\n");
   scanf("%d",&nth);
   int *ptr=&nth;

  while(nth>0)
  {
    // printf("%c  ",*ptr);
    sum=sum+nth;
    nth--;

  }
  printf("sum of oll natueral number to nth value %d",sum);
}