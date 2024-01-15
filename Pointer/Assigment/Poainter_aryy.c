#include<stdio.h>
void main()
{
    int size;
    int *ptr,i;
    ptr=&i;
    printf("Enter the size of an array :\n");
    scanf("%d",&size);
    for(*ptr=0;*ptr<size;*ptr++){
      scanf("%d",*ptr);
      ptr++;
    }

    printf("The array is :\n");
    for(*ptr=1;i<=size;i++){
      printf("%u-------->%d",ptr,*ptr);
      ptr++;
    }

    
   
}
