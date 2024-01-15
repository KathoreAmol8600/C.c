// leap year or not 
#include<stdio.h>
void main()
{
    int ino;
    printf("Enter the year\n");
    scanf("%d",&ino);
  (((ino%4)==0)&&((ino%400)==0))?printf("this is leap year "):printf("this is leap  not year");
}