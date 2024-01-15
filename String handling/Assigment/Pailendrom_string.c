#include<stdio.h>
void main()
{
    char str[20];
    char str2[20];

    gets(str);
    int count=0;
    // count and coppey in str2
    for(int i=0;str[i]!='\0';i++)
    {    
              count++;
              str2[i]=str[i];
    }
    str2[count]='\0';

    // printf("count is %d\n",count);
    int len=count;

    // reverse string is 
    for(int i=0;str[i]!='\0';i++)
    {    
              str2[len-1]=str[i];
              len--;
    }

    printf("\n%s",str2);

    // compairestion is 
    int X=0;
     for(int i=0;str[i]!='\0';i++)
    {    
           X=str[i]-str2[i];   
       
            if(X>0)
            {
                break;
            }
    }
            if(X>0||X<0)
            {
                
                printf(" \nString is Not Pailendrom");
            }else 
            {
                printf(" \n...String is  Pailendrom...");
            }
            
 }
        
 
