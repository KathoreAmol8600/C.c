#include<stdio.h>
void main()
{
    int ino=1;
    int ino2=20;
    // int ino3=30;
  
    int *ptr;
    ptr=&ino;
    int *ptr2=&ino2;
    // int *ptr3=&ino2;
   
    if(*ptr>*ptr2)
    {
        printf("Max num is ino %d\n",*ptr);
    }else{
        printf("Max num is ino2 %d\n",*ptr2);
    }


    



    


}