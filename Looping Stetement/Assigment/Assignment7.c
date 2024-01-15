#include<stdio.h>
void main()
{
    printf("Entert the Numbar");
    int ino=0;
    scanf("%d",&ino);
    int i=1;
    int sum=0;

    while(i<ino)
    {
      if(ino%i==0)
      {
      sum=sum+i;
      }
         i++;
    }
     if(sum==ino)
     {
      printf("this is perfect numbar");
     }else
     {
      printf("this is not peime");
     }

 }

