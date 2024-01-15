#include<stdio.h>
int Find_max(int *ptr,int size)           //1
{
    int max=0;
   for(int i=0;i<size;i++)
   {
      if(ptr[i]>max)
      {
        max=ptr[i];
      }
   }
   return max;
}
int Find_min(int *ptr,int size)         //2
{
    int min=ptr[0];
   for(int i=0;i<size;i++)
   {
      if(ptr[i]<min)
      {
        min=ptr[i];
      }
   }
   return min;
}
void Reverse_Elemn(int *ptr,int size)          //3
{
    int temp=0;
    int k=1;
 
   for(int i=0;i<=size/2;i++)
   {    
    temp=ptr[i];
    ptr[i]=ptr[size-k];
    ptr[size-k]=temp;
    k++;
   }
}
void Faind_pri_num(int *ptr,int size)          //4
{
    int count=0;
     for(int i=0;i<size;i++)
    {
        count=0;
      for(int j=2;j<ptr[i];j++)
      {
        if(ptr[i]%j==0)
        {
            count++;
            break;
        }
      }
      if(count==0)
      {
        printf("this is prime num %d\n",ptr[i]);
      }
    }
}
void Even_odd_Elemnt(int *ptr,int size)                 //5
{
   
     for(int j=0;j<size;j++)
    {
       if(ptr[j]%2==0)
       {
        printf("\neven--->%d",ptr[j]);
       }else{
        printf("\nodd--->%d",ptr[j]);
       }
    }
     
}
int sum_Of_Elemnt(int *ptr,int size)              //6
{
  int sum=0;
     for(int j=0;j<size;j++)
    {
      sum=sum+ptr[j];
    }
    return sum;
}
void Remove_dubli_Ele(int *ptr,int size)                //7
{
   int temp=0;
   int size2=size;
   for(int i=0;i<size;i++)
   {
    for(int j=i+1;j<size-1;j++)
    {
      if(ptr[i]==ptr[j])
      {
        temp=ptr[i];
        for(int k=i;k<size-1;k++)
        {
          ptr[k]=ptr[k+1];
        }
        ptr[size-1]=temp;
        size2--;
      }
    }
   }
   printf("Aftrer removing elemnt\n");
   for(int i=0;i<size2;i++)
    {
      printf("%d ",ptr[i]);
    }
}


void main()
{
    int arr[]={1,4,9,8,9,6,1,13};
    int *ptr=arr;
    int size=8;
    int ino=0;
    int count=0;
    int ret=0;
    do
    {
        if(count==0)
        {
        printf("Enter 1-->Find_max\n");
        printf("Enter 2-->Find_min\n");
        printf("Enter 3--> Reverse_Elemn\n");
        printf("Enter 4-->Faind_pri_num\n");
        printf("Enter 5--> Even_odd_Elemnt \n");
        printf("Enter 6-->sum_Of_Elemnt\n");
        printf("Enter 7--> Remove_dubli_Ele\n");
        count++;
        }
        printf("\nfor Exsit Enter 0.... either 1\n");
        scanf("%d",&ino);
      

        switch(ino)
        {
            case 1:
          
                ret=Find_max(ptr,size);
                printf("Max Elemnt is %d",ret);
            break;
                
            case 2:
               ret=Find_min(ptr,size);
                printf("min Elemnt is %d",ret);
            break;

            case 3:
               Reverse_Elemn(ptr,size);
               for(int i=0;i<size;i++)
               {
                printf("%d",arr[i]);
               } 
            break;

            case 4:
                  Faind_pri_num(ptr,size);
            break;

            case 5:
                Even_odd_Elemnt(ptr,size);
            break;

            case 6:
                ret= sum_Of_Elemnt(ptr,size);
                printf("Sum of Elemnt is %d",ret);
            break;

            case 7:
                Remove_dubli_Ele(ptr,size);
            break;
            default:
            printf("Existing hear  ....");
        }
    }while(ino!=0);
}