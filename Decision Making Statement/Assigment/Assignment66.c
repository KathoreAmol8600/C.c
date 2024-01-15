// #include<stdio.h>
// void main()
// {
//     int Age;
//     char M;
//     char G;
//     printf("Enter the Age\n");
//     scanf(" %d",&Age);
//     printf("Enter the Gender\n");
//     scanf(" %c",&G);
//     printf("Enter the Maried Stetas\n");
//     scanf(" %c",&M);
//     if((G=='M')&&(M=='M'||M=='U'))
//     {
//         if(Age>30)
//         printf(" Male is  Eligibal ");
//         else
//         printf("Male is Not Eligibal");
//     }
//     else if((G=='F')&&(M=='U'))
//     {     if(Age>25){
//             printf(" Female is Eligibal ");
//         }
//           else{
//           printf(" Male Mot is Eligibal ");
//           }
//     }else{
//         printf("InVailed Cheractor");
//     }
    

// }


//Calculate Total Bill With Acording ther chargess
#include<stdio.h>
void Main()
{
    printf("Enter the Total Unit\n");
    int Unit=0;
     double A,B,C,D,E,F,Rimeening,AdditionC;
    scanf("%d",&Unit);
    float TotalBill=0;
    if(Unit<=50||Unit>50)                      // 50
    {
      A = 0.50*Unit;
      Unit=Unit-50;
    }
     else if((Unit>0 && Unit<100))    // 99
    {
       B = 0.75*Unit;
       Unit=Unit-Unit;
    }
    // else if((Unit>0 && Unit>100))
    // {   //above 100
    //    C =0.75*100;
    //    Unit=Unit-100;
    // }
    //   else if((Unit>0 && Unit<100))   // rimenning
    // {
    //    D =1.20*Unit;

    // }
    // else if((Unit>0 && Unit>100))
    // {    // 100
    //    E =1.20*100;
    //     Unit=Unit-100;
    // }
    // else if((Unit>0 && Unit<100))    /// rimeng
    // {
    //    F =1.50*Unit;
    
    // }
    //  else if(Unit>250)
    // {
    //    Rimeening =1.20*Unit;
      
    // }
    else
    {

        printf("Envailed Stetas");
    }

    AdditionC=0.2*Unit;
    TotalBill=A+B+C+D+E+F+Rimeening+AdditionC;

    printf("%f",TotalBill);
     
}