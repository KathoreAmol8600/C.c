#include<stdio.h>
void main()
{
    printf("Enter the Basic Sailerey");
    float Sa,Gs;
    scanf("%f",&Sa);
       
      (Sa<=10000)?Gs=((Sa*0.2)+(Sa*0.8)+(Sa)):
      (Sa<=20000)?Gs=((Sa*0.25)+(Sa*0.9)+(Sa)):
     ( Sa>=20000)?Gs=(Sa*0.3)+(Sa*0.95)+(Sa):printf("Invailed Sailery");

     printf("%f",Gs);
    
}