#include<stdio.h>
// faiend the Quadratic equation Rooot 
#include<math.h>
void main()
{
   double a,b,c,d,z;
   printf("Enter the A, B ,C\n ") ;
   scanf("%lf %lf %lf",&a,&b,&c);
   z=(b*b)-(4*a*c);
   d=sqrt(z);
   double root01=((-1*b)+d)/(2*a);
   double root02=((-1*b)-d)/(2*a);
//    printf("%lf",root01);
//    printf("%lf",root02);
   double root03=(-1*b)/(2*a);
   (d>0)?printf("root01=%lf,root02=%lf",root01,root02):(d==0)?printf("root01%lf,Root02%lf",root03):
   printf("this is Imaginarey root");
   

}