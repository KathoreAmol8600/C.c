#include<stdio.h>
int Fact=1;
int first=0,last=0,mid=0,riv_num=0;

void Swap(int ino,int temp)
{
    if(temp>10)
    {
       temp=temp/10;
       Fact=Fact*10;
    Swap(ino,temp);
    }else
    {
       first=ino/Fact;                                 
       last=ino%10;
       mid=ino/10%(Fact/10);
       riv_num=last*Fact+mid*10+first;
       printf("%d\n",riv_num);

    }
}
void main()
{
   int num=0;
   int temp=0;
   printf("Enter the Number\n");
   scanf("%d",&num);
   temp=num;
   Swap(num,temp);

}