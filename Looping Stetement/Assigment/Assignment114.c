

#include<stdio.h>
void main()
{
    int ino=5;
    for(int i=1;i<=5;i++)
    {
     
        for(int j=1;j<=5;j++)
        {
           if((i==j)||(i>j))
           {
            printf("%d ",ino);
           
           }
            else
            printf("   ");
            
        }
         printf("\n");
         ino--;
    }
        // if((i==j)||i>j)
        // A++;
      
 }
