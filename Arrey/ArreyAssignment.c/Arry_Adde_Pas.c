#include<stdio.h>
// int **iptr=NULL;
int Amol(int *iptr)     // using Poainter adress passing 
{
  printf("\n%d",iptr);
  return 0;
}
int Amol1(int Arr[])     // using Arry adress passing 
{
  printf("\n%d",Arr);
  return 0;
}

void main()
{
    int ret=0;
    int Arr[]={1,2,3,4,5,6,};
    int *ptr=Arr;
    printf("%d",ptr);
    ret=Amol(ptr);
    ret=Amol1(Arr);

}

