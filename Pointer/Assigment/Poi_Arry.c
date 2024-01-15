#include<stdio.h>
int fain_max(int Arr[],int size)
{
    int Ans=0;
    int max=0;
    // printf("%d",Arr[1]);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(Arr[i]>Arr[j])
            {
                Ans=Arr[i];
            }
        }
        if(Ans>max)
        {
          max=Ans;  
        }
    }
      return max;
  }
void main()
{
   int ret=0;
   int *ptr=NULL;
   int size=5;
   int Arr[]={1,86,3,4,65};


   ptr=Arr;
  ret= fain_max(Arr,size);
  printf("Max Ee]lemnt Of Arry%d",ret);

}