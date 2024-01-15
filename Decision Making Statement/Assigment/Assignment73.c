#include<stdio.h>
void main()
{
    printf("Enter the Unit tha You have...");
    int unit=0;
    scanf("%d",&unit);
    float Charge=0;
    if(unit>0&&unit<=250)
    {
    if(unit<=50&&unit>=50)            //from 0 to 50           // 1 st cond
    {
      Charge=50*0.50;
      unit=unit-50;
      printf("%d",Charge);
    }
    if(unit>0&&unit<100)            //  rimening 1 to 99
    {
        Charge=Charge+unit*0.75;
        unit=0;
    }
    if(unit>0&&unit>=100)           //Aftar 100             // 2nd con
    {
        Charge=Charge+100*0.75;
        unit=unit-100;
       
    }
     if(unit>0&&unit<100)            //  rimening 1 to 99
    {
        Charge=Charge+unit*1.20;
        unit=0;
    }
     if(unit>0&&unit>=100)           //Aftar After 100             // 3nd con
    {
        Charge=Charge+100*1.20;
        unit=unit-100;
    }
    }else{
        Charge=unit*1.50;
    }
    float Addi=Charge*0.2;
    printf("Total Charge is%.2f",Charge+Addi);
}