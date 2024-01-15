//rivers the numbar
#include<stdio.h>
void main()
{
    float ino=10;
    printf("Enter the num Five :");
    scanf("%f",&ino);
    
    int no1,no2,no3,no4,no5;      
    no1=(int)ino%(int)10;     // fipth valu
    // printf("%d",no1);
    ino=ino/10;

    no2=(int)ino%(int)10;     // foru
    // printf("%d",no2);       
    ino=ino/10;

    no3=(int)ino%(int)10;     //third
    // printf("%d",no3);
    ino=ino/10;

     no4=(int)ino%(int)10;   // sec
    // printf("%d",no4);
    ino=ino/10;

    no5=(int)ino%(int)10;    //fir
    // printf("%d",no5);

    printf("Addition of Digit is%d",no5+no4+no3+no2+no1);
}