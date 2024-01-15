// Docter And Paitent
#include<stdio.h>
void main()
{
    printf("Enter the Age of Paitent\n");
    int age=0;
    scanf("%d",&age);
    
   (age<=17)?printf(" this age Bilong to Ts=100"):(age>17&&age<=40)?printf(" this age bilong to RS=200"):
   (age>40&&age<=50)?printf(" this age bilong to=300"):printf("Free");
   
}
