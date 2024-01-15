#include<stdio.h>
void main()
{
    printf("Enter the Vakue....\n");
    float num=0;
    float size=0;
    scanf("%f",&num);

    float *ptr=&size;
    *ptr=num;
    printf("%f",size);

}