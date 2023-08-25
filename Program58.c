#include<stdio.h>
void Displey(int no,int no1)
{
    int idigeat=0;
    int count=0;
  while(no!=0)
  {
    idigeat=no%10;
    if(idigeat==no1)
    {
        count++;
    }
    no=no/10;
  }
  printf("The Numbar are :%d",count);
}
int main()
{
    int ino=0;
    scanf("%d",&ino);
    int ino1=0;
    scanf("%d",&ino1);
    Displey(ino,ino1);
    return 0;
}