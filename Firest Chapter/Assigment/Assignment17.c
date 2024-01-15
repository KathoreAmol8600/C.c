// UpperCase LowerCase
#include<stdio.h>
void main()
{
    char Alpha;
    int A='A';
    int Z='Z';
    int a='a';
    int z='z';
    
    printf("Enter the char\n");
    scanf("%c",&Alpha);
  ((Alpha>=A)&&(Alpha<=Z))?printf("This is Uppercase Alphabet"):
  (Alpha>=a)&&(Alpha<=z)?printf("Tis is Loercase Alphabet"):printf("this is Invailed Cheractoer");
}