// Armstong numbar
#include<stdio.h>
void main()
{
    int ino=0,count=0,temp=0,pow=1,ino2=0,sum=0;
    printf("Enter the numbar\n");
    scanf("%d",&ino);                     //100
    temp=ino;
      for(int i=temp;i!=0;i=i/10)
    {
        count++;
    }
    // printf("%d",count);
    for(int i=ino ;i!=0;i=i/10)            //3 time   1sst
    {
        // printf("%d\n",i);
          ino2=i%10;     
        //   printf("Digit is %d\n",ino2);
          pow=1;             
        for(int j=1;j<=count;j++)
        {
             pow=pow*ino2;
            
        }
        //  printf("%d\n",pow);
        sum=sum+pow;
    }
    // printf("sum is  %d",sum);
    if(sum==temp)
    {
        printf("Armstrong numbar\n");
    }else{
        printf("Not Armstrong numbar");
    }

}
