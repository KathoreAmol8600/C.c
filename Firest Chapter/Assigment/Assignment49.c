#include<stdio.h>
void main()
{
    printf("Ente the Temprature");
    float Tem=0;
    scanf("%f",&Tem);
    (Tem<0)? printf("Frizzing Poaint"):
    ((Tem>=0)&&(Tem<=10))?printf("The Very cold Whwether"):
    ((Tem>10)&&(Tem<=20))?printf("The  cold Whwether"):
    ((Tem>20)&&(Tem<=30))?printf("The  Normal In Tempreature"):
    ((Tem>30)&&(Tem<=40))?printf("The   this is Hot "):
    ((Tem>40))?printf("The Very  Hot "):printf("Invailed ");
    
}
