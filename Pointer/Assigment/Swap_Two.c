#include<stdio.h>
void main()
{
     int ino=10;
     int ino2=20;
     int temp=0;

      printf("befor the Swap ino%d\n",ino);
      printf("befor the Swap ino2%d\n",ino2);

    int *ptr=&ino;
    int *ptr2=&ino2;
    
    temp=*ptr;
    *ptr=*ptr2;
    *ptr2=temp;

    
      printf("after  the Swap ino%d\n",ino);
      printf("after  the Swap ino2%d\n",ino2);

}