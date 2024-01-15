#include<stdio.h>
int add=0;
void sum(int num)
{
    if(num!=0)
    {
        add=add+num;
        num--;
        sum(num);
    }else
    {
        printf("sum is...%d",add);
    }
}
void main()
{
  int ino=0;
  printf("Ebter the Number");
  scanf("%d",&ino);
  sum(ino);

}