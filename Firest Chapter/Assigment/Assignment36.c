// Coordinat faind
#include<math.h>
#include<stdio.h>
// (pow((Side),square))
void main()
{
    float   X1,X2, Y1,Y2,Dis,Square=2;
//    long int Square=2;
    printf("Enter the the A cooridinate X1,X2\n");
    scanf("%f%f",&X1,&X2);

    printf("Enetr the B Coordinate Y1,Y2");
   scanf("%f%f",&Y1,&Y2);
   Dis=sqrt(pow(X2-X1,Square)+pow(Y2-Y1,Square));
   printf("Difranse Bitween the A Co And B Cor is =%f",Dis);
//    Dis=(pow((X1-X2),Square));
    

}