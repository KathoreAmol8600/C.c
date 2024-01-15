#include<stdio.h>
void main()
{
    int asize;
    printf("Enter the Size..");
    scanf("%d",&asize);
    int arr[asize];

// enter the Elemnt 
int Temp=0;
    for(int i=0,j=i;i<asize;i++,j++)
    {
       
        scanf("%d",&arr[i]);
        
        if(i==0)                         // 0                      //2
        {

        }
        else                            // i== 1         j==1           
            {        //1      //2
                if(arr[i-1]>arr[j])
                {
                Temp=arr[i-1];
                arr[i-1]=arr[j];
                arr[j]=Temp;
                }
            }
          
    }
// Assending 
//    for(int i=0;i<asize;i++)
//     {
//         scanf("%d",arr[i]);
//     }

  for(int i=0;i<asize;i++)
    {
        printf("%d",arr[i]);
    }
}