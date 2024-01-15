// Stove Maggi And man

#include<stdio.h>
void main()
{
    int  Stove,Min, MNCS;
    printf("Enter the  time\n");
    scanf("%d",&Min);

    printf("Enetr the Numbar Stove\n");
    scanf("%d",&Stove);

    MNCS=(Stove*Min);
    // printf("maxzimum No of Custamar Serves is :=%d",MNCS);
    ((Min<1000)&&(Min>1)&&(Stove<1000)&&(Stove>1))?printf("vailed conditon =%d",MNCS):printf("INvailed condition");
}