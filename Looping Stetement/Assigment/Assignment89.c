// [power of numbar]
#include<stdio.h>
void main()
{
    int ipow,ino=0,pow=1;
    printf("Enter the numbar");
    scanf("%d",&ino);                     //2
    printf("Enter the Power");
    scanf("%d",&ipow);                   //4
    for(int i=1;i<=ipow;i++)                //1st                2nd               3 rd                 4th
    {                                       //2                   4                8                 16          5th false
        pow=pow*ino;
    }
    printf("power of numbar %d",pow);           //16
}