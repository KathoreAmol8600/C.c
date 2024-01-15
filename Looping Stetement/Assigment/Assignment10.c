#include<stdio.h>
#include<math.h>
void main()
{
    printf("Entert the Numbar");
    int ino=0;
    scanf("%d",&ino);
    int ino2=ino;
    int ino5=ino;
    int count=0;
    double Ans=0;
    int ino4=0;
    while(ino!=0)
    {
        count++;
        ino=ino/10;
    }
    // printf("%d\n",count);

while(ino2!=0)
    {
        ino4=ino2%10;
        Ans=Ans+pow(ino4,count);
        ino2=ino2/10;
        
    }
    // printf("%.2lf",Ans);

    if(Ans==ino5)
    {
        printf("this is the Strong numbar...");

    }else{
        printf("this is Not strong numbar...");
    }
    

 }

