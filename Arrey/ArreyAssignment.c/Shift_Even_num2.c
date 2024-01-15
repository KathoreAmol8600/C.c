#include<stdio.h>
void main()
{
    int len=0,temp2=0,temp=0;
    printf("Enter the Number of Element thaht want you Enerrt..\n");
    scanf("%d",&len);
    int arr[len];
    temp=len;

// entering the Elemnt
printf("Enetr the Elemnt\n");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    //befor the Proseduer
printf("befor the prosedueer Arry is\n");
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }

//fained the Even


   for(int i=0;i<temp;i++)
   {
     if(arr[i]%2==0)                 // even num
     {
        temp2=arr[i];                // do not loss aftrer shift
       
        for(int j=i;j<len-1;j++)     // shifting 
        {
            arr[i]=arr[i+1];
        }
         arr[len-1]=temp2;          // add last
         temp--;
         i--;
         
     }
   
   }
// after the Displey Arrry
printf("After the Proseduer  Arry is\n");
   for(int i=0;i<len;i++)
   {
    printf("%d\n",arr[i]);
   }
}

// 12345 13524