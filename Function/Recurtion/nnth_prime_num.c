#include<stdio.h>
 static int j=2;
void prime(int num)
{
  if(num>0)
  {
    if(num>j)
    { printf("num  %d  ",num);
        printf("j%d  \n",j);
         j++;
        prime(num);
    }else
    {
    // printf("%d",num);
    num--;
    j=2;
    prime(num);
    }
  }
}

int main()
{
    int ino=0;
    int ret=0;
    printf("Enter the number wher you want the Prime number");
    scanf("%d",&ino);

    prime(ino);
    // if(ret==1)
    // {
    //     printf("primr %d",ino);
    // }else{
    //     printf("Not prime %d",ino);
    // }

    return 0;
}