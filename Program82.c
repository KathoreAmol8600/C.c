// using dyanamic memoery Accept numbar And displey
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no1=0;
    int *ptr=NULL;
    printf("Enter the numbar of Element:\n");
    scanf("%d",&no1);
    
    // dyanamic memoery allocatin
    ptr=(int *)malloc(no1*(sizeof(int)));
    // if(ptr==NULL)
    // {
    //     printf("unabal to allocate the memoery:");
    //     return -1;
    // }else
    // {
    //     printf("Memoery allocation Secssesfulley");
    // }
    printf("Enter the element %d\n",no1);
    for(int i=0;i<no1;i++)
    {
        scanf("%d",&ptr[i]);    //using pointer Dyannamic memoery used 
    }
    
    printf("Entered element are\n");
    for(int i=0;i<no1;i++)
    {
        printf("%d \n",ptr[i]); // displey oll element by using the ptr poainter
    }
    free(ptr);

    return 0;
}