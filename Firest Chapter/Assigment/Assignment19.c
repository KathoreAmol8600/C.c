// swap veriabal using thard veriabal
#include<stdio.h>
void main()
{
    int ino1,ino2;
    printf("Enter ino1 Numbar:");
    scanf("%d",&ino1);

    printf("Enter ino2 Numbar:");
    scanf("%d",&ino2);

    int ino3=0;
    ino3=ino1;
    ino1=ino2;
    ino2=ino3;

    printf(" Aftar Swaping Ino1= %d\n",ino1);
    printf(" Aftar Swaping Ino2= %d\n",ino2);
    
}