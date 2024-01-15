// 5
// 4
// 3
// 2
// 1
// 12345
#include<stdio.h>
void main()
{
    int Temp=0;
    printf("Enter the Size of Arry..");
    int size=0;
    scanf("%d",&size);
    int Arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(Arr[i]>Arr[j])
            {
                Temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=Temp;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
       printf("%d",Arr[i]);
    }
}

