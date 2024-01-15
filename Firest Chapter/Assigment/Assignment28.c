//Compund Interst faind out
#include<stdio.h>
#include<math.h>
void main()
{
    
    int prins,RI,ICy,Ty;
    
    printf( "Enter the Principal:: intrest rate::Numbaer of time :: time year");
    scanf("%d %d %d %d",&prins,&RI,&ICy,&Ty);

    float Amount,CI;
    
    Amount=(prins*(pow((1+RI/ICy),Ty)));
    // printf("%d",Amount);
    CI=prins-Amount;
    printf(" Compound Intrest is =%f",CI);

} 
