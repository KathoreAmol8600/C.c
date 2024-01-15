#include<stdio.h>
void main()
{
    printf("Ente the Person Height in centimetar");
    float HC=0;
    scanf("%f",&HC);
    (HC<150)? printf("this Person Is Dwarf"):
    ((HC>=150)&&(HC<165))?printf("THis Person Is Averahe Heighted"):
    ((HC>=165)&&(HC<=195))?printf("THis Person Is Taillere"):printf("Invailed Height is");
}