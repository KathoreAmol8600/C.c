// perfect no or not 
#include<stdio.h>
void main()
{
    int ino=0,sum=0;
    printf("Enter the numbar");
    scanf("%d",&ino);

    for(int j=1;j<ino;j++)               // 1.2.3...........10
    {
            sum=0;
            for(int i=1;i<j;i++)
            {    
                if(j%i==0)
                {
                    // printf("%d\n",i);
                    sum=sum+i;
                }
            }
            // printf("sum is  %d\n",sum);
            if(sum==j)
            {
                printf("%d ",j);
            }
            // printf("%d",j);

    }
   }

