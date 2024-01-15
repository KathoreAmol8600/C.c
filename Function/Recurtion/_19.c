#include<stdio.h>
int fact=1;
int first=0,last=0;
void coundig(int inum,int temp)
{
  if(inum>10)
  {
    inum=inum/10;
    fact=fact*10;
     coundig(inum,temp);
  }else{
    printf("\ncount of dig->%d",fact);
    last=temp%10;
    first=temp/fact;
    printf("\nlast of dig->%d",last);
    printf("\first of dig->%d",first);
  }
}
int main()
{
    printf("Enter the number\n");
    int inum=0;
    scanf("%d",&inum);
    int temp=inum;
    coundig(inum,temp);
    return 0;
}