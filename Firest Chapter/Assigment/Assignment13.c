#include<stdio.h>
void main()
{
    int ino;
    printf("Enter the numbar\n");
    scanf("%d",&ino);
  ((((ino%5)==0)&&(ino%11)==0))?printf("the value is Divisibal by 11 and 5"):printf("the value is  not Divisibal by 11 and 5");
}