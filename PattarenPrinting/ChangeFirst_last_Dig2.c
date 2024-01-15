#include<stdio.h>
void main()
{
   long int inum,Fact=1,first,last,mid,Fact_1,first_1,last_1,mid_1,R_num;
   long int midnum;
    printf("Enter the numbaer");
    scanf("%d",&inum);
    int temp=inum;
    while(temp>10)
    {
        temp=temp/10;
        Fact=Fact*10;
    }
    
    first=inum/Fact;
    last=inum%10;
    mid=(inum/10)%(Fact/10);

    Fact_1=Fact/100;
   first_1=mid/Fact_1;
   last_1= mid%10;
   mid_1=(mid/10)%(Fact_1/10);
   midnum=last_1*Fact_1+mid_1*10+first_1;

  R_num=first*Fact+midnum*10+last;
  printf("%ld",R_num);

    
}