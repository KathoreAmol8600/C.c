#include<stdio.h>
void main()
{
    int Temp=0,j,i,c=0,e=0;
    printf("Enter the Size of Arry..");
    int size=0;
    scanf("%d",&size);
    c=size;
    int Arr[size];
    for(i=0;i<c;i++)
    {
        scanf("%d",&Arr[i]);
         if(Arr[i]%2==0)
            {e++;

            }
    }
printf("\neven=%d\n",e);
    for(i=0;i<size-e;i++)
    {
      
            if(Arr[i]%2==0)
            {
                
                Temp=Arr[i];
               for(j=i;j<size;j++)
               {

                    Arr[j]=Arr[j+1];
               }
               Arr[size-1]=Temp;
               printf("=====>%d\n",Temp);
            }
        
    }

    for(int i=0;i<size;i++)
    {
       printf("%d",Arr[i]);
    }
}

