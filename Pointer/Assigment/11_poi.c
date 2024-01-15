// first amd last digit 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int ino=0;
    printf("Enter the Number");
    scanf("%d",&ino);
    int *ptr=&ino;
    int count=0;
    int first=0;
    int lasst=0;
    for(int i=*ptr;i>0;i=i/10)
    {
        count++;
    }
    first=*ptr/pow((10),count-1);
    lasst=*ptr%10;
    
    printf("first digit %d\n",first);
    printf("last  digit %d",lasst);

  free(ptr);
  ptr=NULL;

}