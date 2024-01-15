// swap veriabal not using thired veriabal 
#include<stdio.h>
void main()
{
    int ino1,ino2;
    printf("Enter ino1 Numbar:");
    scanf("%d",&ino1);

    printf("Enter ino2 Numbar:");
    scanf("%d",&ino2);
    ino1=ino1+ino2;
    ino2=ino1-ino2;
    ino1=ino1-ino2;
   
    printf(" Aftar Swaping Ino1= %d\n",ino1);
    printf(" Aftar Swaping Ino2= %d\n",ino2);
    
}