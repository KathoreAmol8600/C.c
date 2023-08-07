/////////////////////////////////////////////////
// CalculatePower
// 2 base,4 power = Ans 16
// long  its a modif...
//signed, unsigned its modifiers
// Filter
// typedef
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef unsigned long int ULONG;
ULONG CalculatePower(int Base,int power)
{
    ULONG iresult = 1;
    if((Base<0)||(power<0))
    {
        printf("The numbar is invailed:");
        return 0;
    }
    for(int i=1;i<=power;i++)
    {
        iresult=iresult*Base;
    }
    return iresult;

}
int main()
{
   ULONG iret=0;
    int ino1 =0;
    int ino2=0;
    printf("Enter thr Base:\n");
    scanf("%d",&ino1);
    printf("Enter thr power:\n");
    scanf("%d",&ino2);
   iret= CalculatePower(ino1,ino2);
   printf("The Ans is:%d\n",iret);
    return 0;
}