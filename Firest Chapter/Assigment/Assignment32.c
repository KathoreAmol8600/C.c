// show which trangal is 
#include<stdio.h>
int main()
{
    int A, B,C;
    printf("Enter the Angal01,angal02,angal03");
    scanf("%d %d %d",&A,&B,&C);
    (A==B&&B==C&&C==A)?printf("ths Equltral trngal"):(A==B||B==C||C==A)?printf("Isoscale trangal"):printf("this is Scalatan Trangal");
    return 0;
}