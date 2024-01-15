// Automorphic numbar

#include<stdio.h>
void main()
{
    printf("Enter the Numbar");
    int ino=0;
    scanf("%d",&ino);                   //12
     int ITemp=ino;                      //temp 12
     int Square=ITemp*ITemp;             //144      
    printf("Square=%d\n",Square);
    int count=0;
   
    int ISno=0;
    int Iteno=0;
    int j=1;
    int Ipcount=0;
     while(ino!=0)                     //                           1)   count num digit
        {
            count++;                   // count= numbar digit
            ino=ino/10;
        }

        printf("%d\n",count);
        // int Square=ITemp2*ITemp2;
       
         int TempCou=1;                 //  
         while(ITemp!=0)                                           // 2)  sepret digit   
       {
            Iteno=ITemp%10;             // 2
            // printf("ist%d\n",Iteno);
         ISno=0;
        while(TempCou>0)                                           // 3) lopp Routin Count Time
        {
            ISno=Square%10;            // 55                   //  4) sepret Squer Digit 
            // printf("2nd %d\n",ISno); 
            Square=Square/10;
            TempCou--;
        }
        //  printf("ist%d\n",Iteno);
        //  printf("2nd %d\n",ISno);
        if(Iteno==ISno)                                          // chek two num digit 
        {
          Ipcount++;                                              // ye s ++
        }
         TempCou++;
         if(TempCou>count)                                    // brek loop above count
         {
            break;
         }

         ITemp=ITemp/10;                          // 5,25,6
    }
    // printf("kk%d",Ipcount);
    if(Ipcount<count)                                             //  chek condition
    {
        printf("this is Not Skey numbar");
    }else
    {
        printf("this is Skey Numbar");
    }
}