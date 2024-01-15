// Vowel and Consodent
#include<stdio.h>
void main()
{
    char Alpha;
    char A='A';
    char E='E';
    char I='I';
    char O='O';
    char U='U';
    printf("Enter the char\n");
    scanf("%c",&Alpha);
  Alpha==A||Alpha==E||Alpha==I||Alpha==O||Alpha==U?printf("this is Vowel "):printf("this is  Consodent");
}