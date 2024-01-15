// salery and Bonas of 
#include<stdio.h>
void main()
{
    float Sal;
    printf("Enter Sailarey Of Employ");
    scanf("%f",&Sal);

   

     (Sal<=10000)?printf("Bonus is =%f",Sal*10/100):
     ((Sal>=10000)&&(Sal<=30000)?printf("Bonus is =%f",Sal*7/100):(Sal>=30000)?
     printf("Bonus is =%f",Sal*7/100):printf("invailed income"));

} 