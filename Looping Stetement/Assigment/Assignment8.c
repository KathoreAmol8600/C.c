#include<stdio.h>
void main()
{
    printf("Entert the Numbar");
    int ino=0;
    scanf("%d",&ino);
    int count=0;
    while(ino!=0)
    {

        if(ino%10==0)
        {
            count++;
        }
      ino=ino/10;
    }
     if(count!=0)
     {
        printf("this is Duck numbar...");
     }else{
        printf("this is not duck numbar..");
     }

 }

