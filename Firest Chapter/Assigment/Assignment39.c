//  LHS equal or Not shon that
#include<stdio.h>
#include<math.h>
void main()
{
  float  a,b;
  printf("Enter the value A,B\n");
  scanf("%f%f",&a,&b);

  float ino1;
  float ino2;

  ino1=pow((a+b),2);                // are alwes Flot 
  printf("%f.f\n",ino1);

  // ino1 = (a+b)*(a+b);
  // printf("%d.1\n",ino1);

  ino2=(a*a)+2*a*b+(b*b);
  printf("%f.f\n",ino2);

  (ino1 == ino2) ? printf("Test Passed"):printf("Test Failed");

  // ino1!=ino2?printf("LHS==RHS :: Test Failed"):printf("LHS!=RHS :: Test Pass ");

}