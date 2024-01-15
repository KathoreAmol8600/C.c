// Happey Numbar
#include<stdio.h>
void main()
{
    printf("Enter the numbar");
    int ino=0;
    scanf("%d",&ino);        //23
    int ino2=0;
    int Square=0;
    int ISquare0;
  do
  {
    Square=0;
    ISquare0=0;
    while(ino!=0)
    {                        // 1st it
    ino2=ino%10;             //3
    ino=ino/10;              // 2
    Square=Square+ino2*ino2;         // sq 
    }
 
   ino=Square;
   ISquare0=ISquare0+Square;
    // printf("%d\n",ISquare0);
   
  }while(ISquare0>=10);
    if(ISquare0==1)
    {
      printf("happey numbar");
    }else{
            printf("Not happey numbar");

    }
}