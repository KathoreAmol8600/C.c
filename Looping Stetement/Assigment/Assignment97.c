#include<stdio.h>
void main()
{
    int Ich=65;
    int temp ;
 
    for(int i=1;i<=5;i++)
    {    
        temp=Ich;
        for(int j=1;j<=5;j++)
        {
            
        printf("%c ",Ich);
        Ich++;
        }
        temp++;
        Ich=temp;
         printf("\n");
    }
   
      
}
