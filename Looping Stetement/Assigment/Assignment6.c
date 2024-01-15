#include<stdio.h>
void main()
{
    printf("Entert the Numbar");
    int ino=0;
    scanf("%d",&ino);
    int i=1;
    int count=0;

    while(i<ino)
    {
      if(ino%i==0)
      {
        count++;
      
      }
         i++;
    }
     if(count==0||count==1)
     {
      printf("this is Prime");
     }else
     {
      printf("this is not peime");
     }

 }

