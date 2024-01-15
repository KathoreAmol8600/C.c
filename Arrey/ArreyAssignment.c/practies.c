// Program 4. Write a structure to store the name, account number and balance of 
// customers (more than 5) and store their information.
//  also add Rs. 100 in the balance of all the customers having more than Rs.1000 
// in their balance and then print the information of all customer after change in 
// balance.

// #include<stdio.h>        // bal >1000-> +100 in it and print or displey
// struct customer
// {
//    char name[20];
//    int ac;
//    int bal;
// };

// void add_informa( struct customer arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d %d",&arr[i].ac,&arr[i].bal);
//     }
// }
// void Discount( struct customer arr[],int size)
// {
//      for(int i=0;i<size;i++)
//     {
//        if(arr[i].bal>1000)
//        {
//        arr[i].bal= arr[i].bal+100;
//        }
//     }
// }
// void displey(struct customer  arr[],int size)
// {
//    for(int i=0;i<size;i++)
//     {
//       printf("%d  %d",arr[i].ac,arr[i].bal);printf("\n");
//     }
// }

// int main()
// {
//     printf("Enter the size of custerma\n");
//     int size=0;
//     scanf("%d",&size);

//   struct customer arr[size];
//   add_informa(arr,size);

// //    displey(arr,size);

//    Discount(arr,size);

//       displey(arr,size);

//     //   displey()
// }

//..............................................................................


// Program 3. Write a program to find the majority elements from given array
// #include<stdio.h>
// int main()
// {
//     int size=10;
//     int arr[10]={3,3,32,3,4,5,3,22,3,3,};
//     int start=0,search=0,count=1;
//     for(int i=0;i<size;i++)
//     {
//         start=arr[i];
//         count=1;
//         for(int i=0;i<size;i++)
//         {
//             if(arr[i]==start)
//             {
//                 count++;
//             }
//         }
//        -- count;
//         printf("countis %d\n",count);
//         if(count>size/2)
//         {
//             printf("aarrey is mejoritey %d",arr[i]);
//             break;
//         }
//     }
//     return 0;
// }

//.........................................................................................

// Program 1. Write a C program to find highest frequency character in a string.
//  Ex. input string : “abansnsa”
//  Output: Highest frequency character is ‘a’ which occur 3 times
// #include<stdio.h>
// int main()
// {
//     printf("Enter the string \n");
//     char str[20];
//     gets(str);
//     int temp=1;
//     char star;
//     char check;
//     int count=1;
//     int index=0;
//     int max=1;
//     for(int i=0;str[i]!='\0';i++)
//     {
//         star=str[i];
//         count=1;
//          for(int i=0;str[i]!='\0';i++)
//             {
//                 if(str[i]==star)
//                 {
//                     count++;
//                 }
//             }
//        --count;
//        printf("%d\n",count);
//     }
//        if(count>temp)
//        {
//         max=count;
//         index++;
//        }
//     --index;
//     if(index<0)
//     {
//        printf("ol in ones");
//     }else{
//         printf("%d  %c",max,str[index]);
//     }
//   return 0;
// }

//............................................................................

// Q 4. Write a program to print the following pattern
//  A 
//  a b 
//  A B C
//  a b c d 
//  A B C D E

// #include<stdio.h>
// int main()
// {
//     char A='A';
//     char a='a';
//     for(int i=0;i<5;i++)
//     {
//          char A='A';
//         char a='a';
//         for(int j=0;j<5;j++)
//         {
//             if(j<=i)
//             {
//               if(i%2==0)
//               {
//                 printf(" %c ",A);
//                 A++;
//               }else{
//                 printf(" %c ",a);
//                 a++;
//               }
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//...............................................................

/*Write a program to input string and find integer value from string and calculate its addition 
Example: abc1234mno4567stv
Output: 1+2+3+4+4+5+6+7 = 32*/

// #include<stdio.h>
// int main()
// {
//     char str[30];
//     gets(str);
//     int sum=0;
//     int value=0;
//     for(int i=0;str[i]!='\0';i++)
//     {
//         if(str[i]>='0'&&str[i]<'9')
//         {
//             value=str[i]-48;
//             sum=sum+value;
           
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }


//......................................................................................


// Q 2. Write a program to create function name as searchValue(int x[],int value) this function accept 
// two parameter first is array and second is single integer value you have to search value in array using 
// a recursion if value found return its index otherwise return -1
// If function return index then we can consider value present otherwise value not present 
// Note: use linear search or binary search approach.

// int search_value(int arr[],int value)
// {
//     int index=0;
//     int flag=-1;
//    for(int i=0;i<5;i++)
//    {
//     if(arr[i]==value)
//     {
//         index++;
//         flag=1;
//         break;
//     }
//    }
//    if(flag==1)
//    {
//     return index;
//    }else{
//     return flag;
//    }
// }
// int main()
// {
//     int ans=0;
//     int size=5;
//     int arr[]={1,2,3,4,5};
//     printf("enter the number that want you fained\n");
//     int ino=0;
//     scanf("%d",&ino);
//     ans=search_value(arr,ino);
//     printf("%d",ans);
//     return 0;
// }


//..............................................................................................

// Q 1. Write a program to declare structure name as Product with field id , name and salary and create 
// array of structure using malloc function arrange all records in descending order

// #include<stdlib.h>
// struct Product
// {
//    int id;
//    int sail;
//    char name[10];
// }obj;
// void enter_Data(struct Product* ptr2,int size )
// {
//     for(int i=0;i<size;i++)
//     {
//         printf("enter id");
//         scanf("%d",&ptr2[i].id);

//         printf("enter sail");
//         scanf("%d",&ptr2[i].sail);
//     }
// }
// // void displey(struct Product* ptr2,int size)
// // {
// //      for(int i=0;i<size;i++)
// //     {
// //        printf("id is %d sailery is %d",ptr2[i].id,ptr2[i].sail);
// //        printf("\n");
// //     }

// // }
// void Desending_order(struct Product* ptr2,int size)
// {
//     struct Product temp;
//      for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//              if(ptr2[i].id>ptr2[j].id)
//             {
//                 temp=ptr2[i];
//                 ptr2[i]=ptr2[j];
//                 ptr2[j]=temp;
//             }
            
//         }
//     }
// }

// void displey(struct Product* ptr2,int size)
// {
//      for(int i=0;i<size;i++)
//     {
//        printf("id is %d sailery is %d",ptr2[i].id,ptr2[i].sail);
//        printf("\n");
//     }
// }
// int main()
// {
//     //  struct Product *ptr=NULL;
//     printf("Enter the total product id\n");
//     int size=0;
//     scanf("%d",&size);
//    struct Product* ptr=(struct Product *)malloc(sizeof(int )*size);
//     if(ptr!=NULL)
//     {
//         printf("Secsesfulle Memoery allocate...\n");
//     }else{
//         printf(" not Secsesfulle Memoery allocate...\n");
//     }
//     // printf(" %d",ptr);
//     enter_Data(ptr,size);
//      Desending_order(ptr,size);
//     displey(ptr,size);
//     return 0;
// }



//................................................................................................

//Q 2. Write a C program to create function name as int getPower(int base, int index) and 
    //   we can accept two parameter and calculate its power using function recursion.


// int ans=1;
// void get_power(int base,int index)
// {
//    if(index!=0)
//    {
//     ans=ans*base;
//     index--;
//     get_power(base,index);
//    }else
//    {
//     printf("%d",ans);
//    }
// }
// int main()
// {
//     int base=2;
//     int index=4;
//      get_power(base,index);
//     return 0;
// }
//

//....................................................................................................

// Q 1. Write a C program to create array of size 5 and find the missing element from array?

// #include<stdio.h>
// int main()
// {
//     int size=5;
//     int arr[5]={10,-2,8,5,10};
//     // asending areey
//     int temp=0;
//     for(int i=0;i<size;i++)
//     {
       
//         for(int j=i+1;j<size;j++)
//         {
//           if(arr[i]>arr[j])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     // for(int i=0;i<size;i++)
//     // {
//     //     printf("%d ",arr[i]);
//     // }
//     printf("Missing elemnt\n");
//     // 
//     int dif=0;
//     for(int i=0;i<size;i++)
//     {
//         dif=arr[i+1]-arr[i];
//       if(dif>1)
//       {
//         for(int j=arr[i]+1;j<arr[i+1];j++)
//         {
//             printf("%d\n",j); 
//         }
//       }
//     }
//     return 0;
// }