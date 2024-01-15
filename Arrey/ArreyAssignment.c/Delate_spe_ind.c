#include<stdio.h>
void main()
{
    printf("Entr the asize\n");
    int asize=0;
    scanf("%d",&asize);
    int arr[asize];

    printf("Entr the Elemnt\n");
    int i=0;
    while(i<asize)
    {
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Displey the Elemnt\n");
    int j=0;
    while(j<asize)
    {
        printf("%d\n",arr[j]);
        j++;
    }

}