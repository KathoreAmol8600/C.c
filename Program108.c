// Input :  5
// Output : 1   2   3   4   5   4   3   2   1   
#include<stdio.h>
void Displey(int ino1)
{
    for(int i=1;i<=ino1;i++)
    {
        printf("%d ",i);
    }

    for(int i=(ino1-1);i>0;i--)
    {
        printf("%d ",i);
    }
}
int main()
{
    printf("Enter the numbar:");
    int ino1=0;
    scanf("%d",&ino1);
    Displey(ino1);
    return 0;
}