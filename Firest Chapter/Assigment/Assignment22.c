//rivers the numbar
#include<stdio.h>
void main()
{
    int ino=0;
    printf("Enter the num three:");
    scanf("%d",&ino);
    
    int no1,no2,no3;
    no1=ino%10;
    printf("%d",no1);
    ino=ino/10;

    no2=ino%10;
    printf("%d",no2);

      ino=ino/10;
    no3=ino%10;
    printf("%d",no3);

} 