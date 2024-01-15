#include<stdio.h>
void main()
{
    int Arr[]={5,2,3,7,6,4,9,8};
    int num=0;
    printf("Enter the Number..\n");
    scanf("%d",&num);

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
          if(Arr[i]+num==Arr[j])
          {
            printf("[ %d  %d ]\n",Arr[j],Arr[i]);
          }
        }
    }
}