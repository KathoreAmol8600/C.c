// spy numbar - numbar which has 0

#include<stdio.h>
void main()
{
    printf("Enter the numbar");
    int ino=0;
    scanf("%d",&ino);
    int ino2=0,iSum=0,iMul=1;
    while(ino!=0)
    {
      ino2=ino%10;
      iSum=iSum+ino2;
      iMul=iMul*ino2;
      ino=ino/10;
    }
    // printf("%d\n",iSum);
    // printf("%d\n",iMul);
    if(iSum==iMul)
    {
        printf("Numbar is Spy numbar");
    }else{
        printf("Numbar is not SPY numbar");
    }
}