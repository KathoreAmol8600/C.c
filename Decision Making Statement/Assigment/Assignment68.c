#include<stdio.h>
void main()
{
    printf("Enter the Numbar\n");
    int ino=0;
    scanf("%d",&ino);
    switch(ino)
    {
        case 1:
        printf("Mondey");
        break;

        case 2:
        printf("Thusdey");
        break;

        case 3:
        printf("Wenasdey");
        break;

        case 4:
        printf("Tharsedey");
        break;

        case 5:
        printf("Fraidey");
        break;

        case 6:
        printf("Shataerdey");
        break;

        case 7:
        printf("Sundey");
        break;
    default:
       printf("Invailed Numbar");

    }
    
}