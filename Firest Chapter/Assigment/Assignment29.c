//Area of Equletral trangal is 1.732*side square
#include<stdio.h>
#include<math.h>
void main()
{
    float Side=0;
    printf("Enter the value of Side of trange");
    scanf("%f",&Side);
    float square=2;
    float no=1.732/4;
   printf("Area of equlatral trangal=%f",(no*(pow((Side),square))));
//    pow((Side),square);
}