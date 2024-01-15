// show the Range of oll data type
#include<stdio.h>
void main()      // main methode
{
    int ino=10;
    short int sno=10;
    long int lno=20;
    float fno=20;
    double dno=30;
    printf("value of ino=%d\n",ino);
    printf("Size of ino=%d\n",sizeof(ino)); 
   
    printf("value of sno=%d\n",sno);
    printf("Size of sno=%d\n",sizeof(sno));   
    
    printf("value of lno=%f\n",lno);
    printf("Size of lno=%d\n",sizeof(lno));  
    
    printf("value of fno=%d\n",fno);
    printf("Size of fno=%d\n",sizeof(fno)); 
  
    printf("value of dno=%f\n",dno);
    printf("Size of dno=%d\n",sizeof(dno)); 
    
}