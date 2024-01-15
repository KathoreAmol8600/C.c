//print oll natueral numbaer  forloop using poi
#include<stdio.h>
void main()
{
   char a='a';
   char *ptr=&a;

  while(*ptr<='z')
  {
    printf("%c  ",*ptr);
    a++;

  }
}