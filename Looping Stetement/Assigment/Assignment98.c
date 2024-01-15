#include<stdio.h>
void main()
{
    
    int ino=1;
    for(int i=1;i<=5;i++)
    {    
          
        for(int j=1;j<=5;j++)
        {
            if(j%2==0)
            {
                printf("*   ");
            }else
            {
                printf("%d   ",ino);
                ino++;
            }
           
        }
    
        printf("\n");
        
    }
}