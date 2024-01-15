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
   if(nth%2==0)
    sum=sum+nth;

    nth--;

  }
  printf("sum of oll Even nuber number to nth value %d",sum);
}