// Polindrom numbar
#include<stdio.h>
void main()
{
    int ino=10;
    printf("Enter the three  Numbar :");
    scanf("%d",&ino);
    
    int no1,no2,no3;      
    no1=ino%10;     // 
    // printf("%d",no1);
    ino=ino/10;

    no2=ino%10;     // 
    // printf("%d",no2);       
    ino=ino/10;

    no3=ino%10;     //
    // printf("%d",no3);
    ino=ino/10;

    // printf("%d %d %d",no1,no2,no3);
    (no1==no3)?printf("this is Polindrom Numbar"):printf("this is  not Polindrom Numbar");
}