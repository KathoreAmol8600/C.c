//Calculate Total Bill With Acording ther chargess
#include<stdio.h>
void main()
{
    printf("Enter the  Total Unit\n");
    int Unit=0;
    float A,B,C,D,Z,E,F,Rimeening,AdditionC,Rimeening1,TotalBill2;
    scanf("%d",&Unit);
     float TotalBill=0;
       AdditionC=0.2*Unit;
       printf("Addition=%.2f\n",AdditionC);
    if(Unit<=50||Unit>=50)                 // 25+37+20
    {
      A = 0.50*50;
      Unit=Unit-50;
      printf("A=%.2f\n",A);
    }
    if((Unit>0 && Unit<=100))    // 99
    {
   
       B = 0.75*Unit;
       Unit=0;
        printf("B=%.2f\n",B);
      
    }
    if((Unit>0&&Unit>100)){   //escond100
       C =0.75*100;
       Unit=Unit-100;
        printf("C=%.2f\n",C);
    }
    if((Unit>0&&Unit<=100))   // rimenning
    {
       D =1.20*Unit;
        Unit=0;
        printf("D=%.2f\n",D);

    }
    if((Unit>0&&Unit>100)){    // 100
       E =1.20*100;
        Unit=Unit-100;
         printf("E=%.2f\n",E);
    }
    if((Unit>0&&Unit<=250))    /// rimeng    25+
    {
       F=1.50*Unit;
        printf("F=%.2f\n",F);
        Unit=0;
    
    }
    else if (Unit>250)
    {
       Rimeening =1.50*Unit;
       printf("Rimeng %.2f\n",Rimeening);
       Unit=0;
    }
    printf(" node is=%d\n",Unit);
    TotalBill=A+B+C+D+E+F+Rimeening+AdditionC;
    // TotalBill2=Rimeening1;
    printf("total=%.2f\n",TotalBill);
    // printf("total2=%.2f\n",TotalBill2);
}