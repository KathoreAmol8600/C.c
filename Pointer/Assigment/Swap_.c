#include<stdio.h>
void main()
{
    int ino=10;
    int ino2=20;

    printf("befor the Swap ino%d\n",ino);
    printf("befor the Swap ino2%d\n",ino2);

    int *ptr=&ino;
    int *ptr2=&ino2;
   
    *ptr=*ptr+*ptr2;             //30
    *ptr2=*ptr-*ptr2;            //10
    *ptr=*ptr-*ptr2;             //20

    printf("after the Swap ino%d\n",ino);
    printf("after the Swap ino2%d\n",ino2);

    
}