// check whetar is leap year or not
#include<stdio.h>
void main()
{
  int year;
  printf("Enter the Year...");
  scanf("%d",&year);
  (((year%4)==0)||((year%400)==0))?printf("this is leap year.."):printf("this is not leap year");
}