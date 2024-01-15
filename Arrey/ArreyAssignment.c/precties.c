#include<stdio.h>
// int **iptr=NULL;
// int Ans=0;

// int Sum(int Arr[],int size)     // using Arry adress passing 
// {
//   if(size>=0)
//   {
//     Ans=Ans+Arr[size];
//     Sum(Arr,size-1);
//   }
//   return Ans;
// }int Amol(int *iptr)     // using Poainter adress passing 
// {
//   printf("\n%d",iptr);
//   return 0;
// }
int max1=0;
int Max(int Arr[],int size)     // using Arry adress passing 
{
  if(size>=0)
  {
    if(max1<Arr[size])
    {
      max1=Arr[size];
    }
    Max(Arr,--size);
  }
  return max1;
}



void main()
{
    int ret=0;
    int size=6;
    int Arr[]={1,2,31,4,5,6};
    // int *ptr=Arr;
    // // ret=Amol(ptr);
    // ret=Sum(Arr,size-1);
    // printf("\nAddition is %d",ret);

    ret=Max(Arr,--size);
    printf("\nMAx is %d",ret);

}

// local veribal                       .      and              .       global Veriabal 
//...................................................................................................
// 1> inside the Fun or block          .      scope            .      1> outside the Fun or block
// 2> can not acsses outside fun.block .      Acsses           .      2> can  acsses outside fun.block
// 3>                                  .      Memoery          .
// 4> can not sher                     .      value sher       .      4> can sher
// 5>                             Syntex        .      Pairemitaer      .
// 5>                                  .      life time        .
// 6>                                  .              .
// 7>                                  .      Exzampal         . 

// coll by value and coll by adress  
// 