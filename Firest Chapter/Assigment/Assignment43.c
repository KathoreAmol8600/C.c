// Fained the Max Value of oxygen
#include<stdio.h>
void main()
{
    printf("Enter the Oxsition leval Ram Sham Krish Vipul Nawan \n");
    float a , b, c,d,e;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    
   (a>b&&a>c&&a>d&&a>e)?printf("Ram IS Greatar"):(b>c&&b>d&&b>e)?printf("Sham is Gretar"):
   (c>d&&c>e)?printf("Krish is Gretar"):(d>e)?printf("Vishal Gretar"):printf("Nawan Gretar");
   
}