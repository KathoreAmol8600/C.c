#include<stdio.h>
void main()
{
    int inum,first,last,mid,Fact=1,R_Num;
    printf("Enter the number\n");           // enput num
    scanf("%d",&inum);
    int temp=inum;
    while(inum>10)                          // Fact
    {
        inum=inum/10;
        Fact=Fact*10;
    }
    last=temp%10;
    first=temp/Fact;
    mid=((temp/10)%(Fact/10));
    R_Num=last*Fact+mid*10+first;
    printf("%d",R_Num);
}