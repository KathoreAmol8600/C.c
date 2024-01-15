// Voltage ,current ,resistanse
#include<stdio.h>
void main()
{
    float Vol,Re,Ic;
    printf("Enter the voltage:\n");
    scanf("%f",&Vol);

    printf("Enter the Curent:\n");
    scanf("%f",&Ic);
    
    printf("Enter the Resistanse:\n");
    scanf("%f",&Re);

     printf("Voltage is=%f\n",Ic*Re);
     printf(" Curentis=%f\n",Vol/Re);
     printf("Resistanse is=%f\n",Vol/Ic);
   
   
   
}