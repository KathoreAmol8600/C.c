/////////////////////////////////////////////////
// CalculatePower
// 2 base,4 power = Ans 16
///////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int CalculatePower(int Base,int power)
{
    int iresult = 1;
    for(int i=1;i<=power;i++)
    {
        iresult=iresult*Base;
    }
    return iresult;

}
int main()
{
    int iret=0;
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