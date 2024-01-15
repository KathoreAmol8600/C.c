//arey in asending or dessending 
#include<stdio.h>
void main()
{
    int arr[5]={13,3,6,7,11};
    int *ptr=NULL;
    ptr=arr;
    // printf("%d",*(ptr+1));
    // printf("%d",ptr[1]);
    int uvalue=0;
    int flag=0;
    printf("Enter the value ...");
    scanf("%d",&uvalue);
  
    for(int i=0;i<5;i++)
    {
        if(*(ptr+i)==uvalue)
        {
           flag=1;
            break;
        }
        
    }
    if(flag)
    {
        printf("Elemnt is Presen");
    }else{
        printf("Elemnt is not  Presen");
    }
   
}