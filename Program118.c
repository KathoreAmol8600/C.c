/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e        
*/  
#include<stdio.h>
#include<stdlib.h>
void Displey(int row,int col)
{
    for(int i=1;i<=row;i++)
    {
        char C='a';
        for(int j=1;j<=col;j++)
        {
            printf("%c\t",C);
            C++;
        }
        printf("\n");
    }
}
int main()
{
    int no1=0;
    int no2=0;

    printf("Enter the Row:");
    scanf("%d",&no1);
    printf("Enter the Col:");
    scanf("%d",&no2);
     
     Displey(no1,no2);
    return 0;
}