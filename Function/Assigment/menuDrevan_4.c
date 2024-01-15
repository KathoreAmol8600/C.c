#include<stdio.h>
int i=0;
int veri=0;
int count=0;
int temp=0;
// void oll_Nat_num_nth(int num)       //01
// {
   
// }

// void oll_Nat_num_riv(int num)   //-2
// {
    
// }

// void oll_alphbet(char A)      //03
// {
    
// }

// void Even_num_nth(int num)         //04
// {
     
// }

// void odd_num_nth(int num)            //05
// {
   
// }

// void sum_Natu_num(int num)         //06
// {
    
// }
int sum=0;
int Elemnt_foun_(int arr[],int size,int ino)            //06
{
    if(i<size)
    {
       if(arr[i]==ino)
       {
        return 1;
        i=size;
       }
       i++;
     Elemnt_foun_(arr,size,ino); 
    }else{
        sum=0;
        i=0;
        return 0;
    }
          
    
}

void Displey_riv_arry(int arr[],int size)            //07
{
    if(size>=0)
    {
        printf("%d ",arr[size]);
        size--;
        Displey_riv_arry(arr,size);
    }
    
}
int j=2;
void Prime_num(int arr[],int size)               //08
{
 if(i<size)
 {
    count=0;
    for(;j<arr[i];j++)
    {
        if(arr[i]%j==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
     printf("%d ",arr[i]);
    }
    i++;
    Prime_num(arr,size);   
 }else{
    // i=0;
    // veri=0;
    // count=0;
    // temp=0;
 }
}

// void  onley_duck_num(int arr[],int size)     //09
// {
//     if(i<size)
//     {
//         temp=arr[i];
//         if(arr[i]==0)
//         {
//             printf("Duck num -->%d",arr[i]);
//             printf("\n");
//             i++;
//             onley_duck_num(arr,size) ;
//         }
//        for( ;temp>0;temp=temp/10)
//        {
//             veri=temp%10;
//             if(veri==0)
//             {
//                 printf("Duck num -->%d",arr[i]);
//                 printf("\n");
//                 i++;
//                 onley_duck_num(arr,size) ;
//             }
//         }
//          i++;
//          onley_duck_num(arr,size) ;
//     }else
//     {
//          i=0;
//         veri=0;
//         count=0;
//         temp=0;
//     }
// }

void main()
{
    int ino=1;
    int count=0;
    int Arr[5]={100,2,13,0,103};
    int size=5;
    int ret=0;
    // int ino1=0;
    do
    {
        if(count==0)
        {
        printf("Enter 1-->5 elemnt arry  displey it\n");
        printf("Enter 2-->caluculet 5 elemnt of sum\n");
        printf("Enter 3-->max and min num\n");
        printf("Enter 4-->even or odd num\n");
        printf("Enter 5-->positive and nigative \n");
        printf("Enter 6-->elemnt found or not\n");
        printf("Enter 7-->rivers arry\n");
        printf("Enter 8-->displey prime number in arry\n");
        printf("Enter 9-->onley duck number in arry\n");
        count++;
        }
        printf("\nfor Exsit Enter 0.... either 1\n");
        scanf("%d",&ino);
        switch(ino)
        {  
            // case 1:
            // Displey_arry(Arr);
            // break;
          
            // case 2:
            // Calculate_Sum(Arr);
            // break;

            // case 3:
            // Faind_max_min(Arr);
            // break;

            // case 4:
            // Even_odd_arry(Arr);
            // break;

            // case 5:
            // positive_nigative_arry(Arr);
            // break;

            case 6:
            printf("Enter the Elemnt for found..");
            scanf("%d",&ino);
            ret=Elemnt_foun_(Arr,size,ino);
            if(ret==1)
            {
                printf("fount...!!");
            }else{
                printf("Not fount...!!");
            }
            break;

            case 7:
            Displey_riv_arry(Arr,size);
            break;

            case 8:
            Prime_num(Arr,size);
            break;
 
            // case 9:
            // onley_duck_num(Arr,size);
            // break;
            
        }
    }while(ino!=0);
}