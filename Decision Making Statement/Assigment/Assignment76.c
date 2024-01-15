// Automorphic Numbar
#include<stdio.h>
void main()
{
    printf("Enter the numbar");
    int ino=0;
    scanf("%d",&ino);        // 5                         38
    int Square=0;
    int FirD=ino%10;         // 5                         8
    printf("%d\n",FirD);
    Square=ino*ino;         //25     1 st digit = 2      1444
    int SecD=Square%10;                                 
     printf("%d\n",SecD);                               //  4

    if(FirD==SecD)
    {
        printf("this Automorphic numbar");
    }else{
       printf("this is not Automorphic numbar");

    }
}