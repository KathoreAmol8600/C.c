#include<stdio.h>
void main()
{
    int Arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
        
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
            printf("%d",Arr[i][j]);
            sum=sum+Arr[i][j];
            }
        }    
    }
     
    printf("=%d",sum);
}