// using the bitwise opreator swap two num
#include<stdio.h>
void main()
{
    int ino=10,ino2=20;
    printf("Enter the First Numbar..\n");
    scanf("%d",&ino);

    printf("Enter the First Numbar..\n");
    scanf("%d",&ino2);

    // int ino3=ino;
    // ino=(~ino2);
    // ino=(~ino);

    // ino2=ino3;

    ino=ino^ino2;      //6
    ino2=ino^ino2;      //2
    ino=ino^ino2;       //4

    printf("Firest numbar:=%d\n",ino);

    printf("Second Numbar:=%d\n",ino2);
}