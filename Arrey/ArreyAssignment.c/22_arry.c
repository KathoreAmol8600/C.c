#include<stdio.h>
void main()
{
    int arr[]={1,9,5,6,13,2};
    int size=6;
    int dif,Maxdif=0;
    int num1,num2;
    for(int i=0;i<size;i++)
    {

        for(int j=i+1;j<size-1;j++)
        {
            dif=arr[i]-arr[j];
            if(dif<0)
            {
                dif=-dif;

            }
            if(dif>Maxdif)
            {
                num1=arr[i];
                num2=arr[j];
                Maxdif=dif;
            }
        }
    }
      printf("%d->%d %d ",Maxdif,num1,num2);
//      int ino=-2;
//      ino=-ino;
//      printf("%d",ino);
}