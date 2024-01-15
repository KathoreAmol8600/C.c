#include<stdio.h>
void main()
{
    printf("Entert the Numbar");
    int ino=0;
    int Fact=0;
    // int ino1=ino;
    scanf("%d",&ino);
     int ino1=ino;
    int ino2=0;
    // int fac=1;
    int Sum=1;
    while(ino!=0)
    {
        ino2=ino%10;
        // printf("%d\n",ino2);
        Sum=1;
        while(ino2>0)
        {
            // printf("%d\n",ino2);
            
            Sum=Sum*ino2;
           
          ino2--;
        }

      ino=ino/10;
       int ino3=Sum;
    //    printf("%d\n",ino3);
        Fact=Fact+ino3;
        // printf("%d",Fact);
    //   printf("%d\n",Sum);
    }

    if(Fact==ino1)
    {
        printf("this is the Strong numbar...");

    }else{
        printf("this is Not strong numbar...");
    }
    

 }

