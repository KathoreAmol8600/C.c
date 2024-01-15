
#include<stdio.h>
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            // printf(" * ");
            if(j>=5-i&&j<=3+i)
            {
                printf("   * ");
            }else{
                printf("     ");
            }
        }
        printf("\n");
        
    }

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            // printf(" * ");
            if((j>=i+1)&&(j<=7-i))
            {
                printf("   * ");
            }else{
                printf("     ");
            }
        }
        printf("\n");
    }

       

}