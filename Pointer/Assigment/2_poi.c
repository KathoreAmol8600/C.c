//print oll natueral numbaer  forloop using poi
#include<stdio.h>
void main()
{
    int nth=0;
    int *ptr=0;
    ptr=&nth;
    printf("Enter the nth value...\n");
    scanf("%d",&nth);

    for(int i=*ptr;i>=0;i++)
    {
        printf("%d ",i);
    }
}