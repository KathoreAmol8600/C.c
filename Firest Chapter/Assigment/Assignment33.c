// wcp gross sailarey 
#include<stdio.h>
int main()
{
    float NWD, PDS,GS,DA,RA,BS;
    printf("Enter the no of warkig dey");
    scanf("%f",&NWD);

   
    printf("Enter the Perdey Sailarey.");
    scanf("%f",&PDS);
   

    BS=NWD*PDS;
    DA=(BS*20/100);
    RA=(BS*40/100);

    GS=BS+DA+RA;

    printf("Groos Sailaery is=%f",GS);


    return 0;
}