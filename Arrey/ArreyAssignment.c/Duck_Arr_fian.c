#include<stdio.h>
void main()
{
    int asize=0,idigit=0,Flag=1;
    printf("Enter the Numb..\n");
    scanf("%d",&asize);
    int Arr[asize];

    printf("Enetr the element\n");
    for(int i=0;i<asize;i++)
    {
        scanf("%d",&Arr[i]);
    }

   printf("this is Duck num...\n");
    for(int i=0;i<asize;i++)           //elemet
    {
        Flag=1;
        for(int j=Arr[i];j>0;j=j/10)    //digit
        {
            idigit=j%10;
            if(idigit==0)
            {
                Flag=0;
                break;
            }
        }
        if(Flag==0)
        {
            printf("%d\n",Arr[i]);
        }
    }
   
}