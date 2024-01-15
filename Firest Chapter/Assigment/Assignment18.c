// Profit and Loss
#include<stdio.h>
void main()
{
   int CP,SP;
   //  ino=CP-SP;
   printf("Enter the Valu of Cost Prise ..");
   scanf("%d",&CP);


   printf("Enter the Valu of Selling prise ..");
   scanf("%d",&SP);
   SP>CP?printf("will be profit=%d",SP-CP):printf("Will be Loss=%d",SP-CP);

}