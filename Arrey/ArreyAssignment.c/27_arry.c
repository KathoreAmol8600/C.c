#include<stdio.h>
void main()
{
    int arr[]={1,15,39,75,92};
    int size=5;
    printf("enter the Difrranse elemnt..");
    int udif=0;
    scanf("%d",&udif);
    int numdif=0;
    int flag=0;
    for(int i=0;i<size;i++)
    {
       
     
        for(int j=i+1;j<size;j++)
        {
             
           numdif=arr[i]-arr[j];
           if(numdif<0)
           {
            numdif=-numdif;
           }
            if(numdif==udif)
            {
                //  printf("%d",i);
                printf("given difranse %d ->%d %d ",udif,arr[i],arr[j]);
                flag=1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
}