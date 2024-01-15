#include<stdio.h>
#include<stdlib.h>
void Show_Elemnt(int arr[],int size)           //1
{
//    printf("%d  %d\n",arr,size);
   printf("Elemnt is \n");
   for(int i=0;i<size;i++)
   {
    printf("%d ",arr[i]);
   }
}
void Assending_Order(int arr[],int size)         //2
{
    printf("Assending Element  is \n");
    int temp=0;
   for(int i=0;i<size;i++)
   {
    for(int j=i;j<size-1;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   for(int i=0;i<size;i++)
   {
    printf("%d ",arr[i]);
   }
   
}
void Desending_Order(int arr[],int size)          //3
{
 printf("Desending  Element  is \n"); 
    int temp=0;
   for(int i=0;i<size;i++)
   {
    for(int j=i;j<size;j++)
    {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   for(int i=0;i<size;i++)
   {
    printf("%d ",arr[i]);
   }
}
void Search_spesif_value(int arr[],int size)          //4
{
    int svalue=0;
    printf("enter the Value for search ..\n");
    scanf("%d",&svalue);
    int count=0;
     for(int j=0;j<size;j++)
    {
        if(svalue==arr[j])
        {
            count++;
        }
        
    }
    if(count==1)
    {
        printf("Value is Present...\n");
    }else{
         printf("Value is not  Present...\n");
    }
}
void Add_elemnt_Spe_index(int arr[],int size)                 //5
{
     int Uvalue=0;
     int index=0,temp;
     int *ptr=NULL;
     ptr=arr;
    printf("enter the index and Value ..\n");
    scanf("%d %d",&index,&Uvalue);
    ptr=(int *)realloc(ptr,size*1);
       
     for(int j=0;j<size;j++)
    {
       if(j==index)
       {
        
        for(int k=size-1;k>=index;k--)
        {
            arr[k]=arr[k-1];
            
        }
        arr[index]Uvalue;
        break;
       }
        
    }
     for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
   
}
void Delate_elemnt_Spe_index(int arr[],int size)              //6
{
//    int Uvalue=0;
     int index=0;
    printf("enter the index for Delate ..\n");
    scanf("%d",&index);

     for(int j=0;j<size;j++)
    {
       if(j==index)
       {
        arr[j]=0;
       }
        
    }
     for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void calculate_Freq_Elemnt(int arr[],int size)                //7
{
    int count=0;
    for(int i=0;i<size;i++)
   {
        count=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
                     
         printf("%d ----->%d",arr[i],count);
         printf("\n");
   }
  
}

void main()
{
    int arr[]={1,4,9,8,9,6,0,9};
    int size=8;
    int ino=0;
    int count=0;
    do
    {
        if(count==0)
        {
        printf("Enter 1-->Show all elemnt of arry\n");
        printf("Enter 2-->Show arrey elemtn in asending order\n");
        printf("Enter 3-->Show arrey elemtn in desending order\n");
        printf("Enter 4-->search spesific value by value\n");
        printf("Enter 5-->add elemnt at specsfic index \n");
        printf("Enter 6-->Delate element at sesific index\n");
        printf("Enter 7-->calculate frequensey each elemnt in arry\n");
        count++;
        }
        printf("\nfor Exsit Enter 0.... either 1\n");
        scanf("%d",&ino);

        switch(ino)
        {
            case 1:
          
                Show_Elemnt(arr,size);
            break;
                
            case 2:
                Assending_Order(arr,size);
            break;

            case 3:
                Desending_Order(arr,size);
            break;

            case 4:
                 Search_spesif_value(arr,size);
            break;

            case 5:
                 Add_elemnt_Spe_index(arr,size);
            break;

            case 6:
                 Delate_elemnt_Spe_index(arr,size);
            break;

            case 7:
                 calculate_Freq_Elemnt(arr,size);
            break;
            default:
            printf("Existing hear  ....");
        }
    }while(ino!=0);
}
