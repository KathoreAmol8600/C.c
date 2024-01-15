// swap first and last digit 
// first amd last digit  sum 
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
    int lasst=0,mid=0,fact=1;
    for(int i=*ptr;i>10;i=i/10)
    {
    
        fact=fact*10;
    }
    printf("%d\n",fact);
    first=*ptr/fact;
     printf("%d\n",first);
    mid=((*ptr/10)%(fact/10));
     printf("%d\n",mid );
    lasst=*ptr%10;
     printf("%d\n",lasst);
    int rnum=lasst*fact+mid*(fact/10);
    printf("%d\n",rnum);
  //   if(rnum==ino)
  //   {
  // printf("Number is  pailindrom number");
  //   }
  //   else
  //   {
  //     printf("Number is not pailindrom number");
  //   }
    
  free(ptr);
  ptr=NULL;

}