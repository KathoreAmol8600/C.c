#include<stdio.h>
int count=0;
void coundig(int inum)
{
  if(inum>0)
  {
    inum=inum/10;
    count++;
     coundig(inum);
  }else{
    printf("\ncount of dig->%d",count);
  }
}
int main()
{
    printf("Enter the number\n");
    int inum=0;
    scanf("%d",&inum);
    coundig(inum);
    return 0;
}