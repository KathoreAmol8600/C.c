
// Sown the Charecta Alphbet And Digit
#include<stdio.h>
void main()
{
    printf("Enter the Char:");
    char Ca;
    scanf("%c",&Ca);
    
    printf("Enter the Numbar:");
    int ino;
    scanf("%d",&ino);

    // int ino1=1,ino2=9;
    int  A='A',Z='Z';
    int  a='a',z='z';
    // printf("%d",A);                   //65
    (((ino>=1)&&(ino<=9))&& ((Ca>=A)&&(Ca<=Z)||(Ca>=a)&&(Ca<=z)))?printf("first is  Cheractor ::: Second Is Numbar "):
    ((ino>=1)&&(ino<=9))?printf("this is Numbar"):
    ((Ca>=A)&&(Ca<=Z)||(Ca>=a)&&(Ca<=z))?printf("this is Charectaer"):printf("This is Sspeshal Symbol");

}