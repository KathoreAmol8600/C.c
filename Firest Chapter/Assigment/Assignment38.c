// wcp to faind the Maggic numbar
#include<stdio.h>
void main()
{
    int ino,ino01,Sum,Sum01;
    printf("Enter the Four Digit Numbar numbar:");
    scanf("%d",&ino);
    ino01=ino;
    Sum=ino%10;     //fourth
    ino=ino/10;
    Sum=Sum+ino%10;  //third
    ino=ino/10;
    Sum=Sum+ino%10;   //second
    ino=ino/10;
    Sum=Sum+ino%10;    // first     // total sum =Sum  (10)
    // printf("%d\n",Sum);   // 18
    Sum01=Sum;
    // reiverse the Sum
    int ino1,ino2,Ans;
    ino1=Sum01%10;
    ino1=ino1*10;      //80
    // printf("%d",ino1);
    Sum01=Sum01/10;

    ino2=Sum01%10; 
    ino2=ino2*1;      
        // printf("%d",ino2);

    Ans=ino1+ino2;   
    // printf("%d",Ans);
   int Magic=Sum*Ans;
   (Magic==ino01)?printf("this is Magic Numbar"):
   printf("this is not maggic numbar");

}
