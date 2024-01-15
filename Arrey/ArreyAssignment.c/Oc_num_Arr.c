#include<stdio.h>
void main()
{

    int asize=0,x=-1;
    printf("enter the size..");
    scanf("%d",&asize);
    int Arr[asize],a[asize];
    int count=0;

    for(int i=0;i<asize;i++)
        {
            scanf("%d",&Arr[i]);
        
        }

printf("\n------------------------------------------------------\n");
     for(int i=0;i<asize;i++)
        {
            for(int j=i+1;j<asize;j++)
            {
                if(Arr[i]>Arr[j])
                {
                    int Temp=Arr[i];
                    Arr[i]=Arr[j];
                    Arr[j]=Temp;
                }
            }
        }
    
     for(int i=0;i<asize;i++)
        {
            printf("%d",Arr[i]);
        
        }

printf("\n------------------------------------------------------\n");
    for(int i=0;i<asize;i++)
    {
       count=1;
        for(int j=i+1;j<asize;j++)
        {
            if(Arr[i]==Arr[j])
            {
                //Tarr[i]++;
                a[j]=x;
                count++;
            }
           
        }
            if(a[i]!=x)
            {
                a[i]=count;

                if(a[i]>0)
                printf("%d--> %d\n",Arr[i],a[i]);

            }
        } 
    }