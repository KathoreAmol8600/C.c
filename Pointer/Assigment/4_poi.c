//print oll natueral numbaer  forloop using poi
#include<stdio.h>
void main()
{
   int a=1;
   int *ptr=&a;

  while(a<=100)
  {
    // printf("%c  ",*ptr);
    if(*ptr%2==0)
    {
        printf("%d ",*ptr);
    }
    a++;

  }
}