#include<stdio.h>
int ino=1;
int sum=0;
int count=0;

void oll_Nat_num_nth(int num)       //01
{
    if(ino<=num)
    {
        printf("%d ",ino);
        ino++;
        oll_Nat_num_nth(num);
    }
}

void oll_Nat_num_riv(int num)   //-2
{
    if(num>0)
    {
        printf("%d ",num );
        
       oll_Nat_num_riv(--num);
    }
}

void oll_alphbet(char A)      //03
{
    if(A<='Z')
    {
        printf("%c ",A);
        A++;
        oll_alphbet(A);
    }else{
        A='A';
    }
}

void Even_num_nth(int num)         //04
{
     if(ino<=num)
    {
        if(ino%2==0)
        {
        printf("%d ",ino);
        }
        ino++;
        Even_num_nth(num);
    }else{
        ino=1;
    }
}

void odd_num_nth(int num)            //05
{
    if(ino<=num)
    {
        if(ino%2!=0)
        {
        printf("%d ",ino);
        }
        ino++;
         odd_num_nth(num);
    }else{
        ino=1;
    }
}

void sum_Natu_num(int num)         //06
{
     if(ino<=num)
    {
       sum=sum+ino;
        ino++;
        sum_Natu_num(num);
    }else
    {
        printf("sum is ..%d",sum);
        sum=0;
        ino=1;
    }
}

void sum_even_num(int num)            //07
{
      if(ino<=num)
    {
        if(ino%2==0)
        {
        sum=sum+ino;
        }
        ino++;
         sum_even_num(num);
    } else{
        printf("sum of even num is %d",sum);
        sum=0;
        ino=1;
    }
}

void sum_odd_num(int num)            //08
{
    
    if(ino<=num)
    {
        if(ino%2!=0)
        {
        sum=sum+ino;
        }
        ino++;
         sum_odd_num(num);
    } else{
        printf("sum of odd num is %d",sum);
        sum=0;
        ino=1;
    }
}

void Table_num(int num)               //09
{
    if(ino<=10)
    {
        printf("%d ",num*ino);
        ino++;
        Table_num(num);
    }else{
        ino=1;
    }
}

void count_dig_num(int num)           //10
{
    if(num!=0)
    {
        count++;
        num=num/10;
        count_dig_num(num);
    }else{
        printf("Digites are %d",count);
        count=0;
    }
}



void main()
{
    int ino=1;
    int count=0;
    do
    {
        if(count==0)
        {
        printf("Enter 1-->print oll natueral number from 1 to N\n");
        printf("Enter 2-->prints oll natueral num in reverfrom\n");
        printf("Enter 3-->print oll alphabet a to Z\n");
        printf("Enter 4-->print oll Even number bitween 1 to 100\n");
        printf("Enter 5-->print oll odd number bitween 1 to 100\n");
        printf("Enter 6-->sum print oll natueral number from 1 to N\n");
        printf("Enter 7-->sum print oll Even number from 1 to N-->\n");
        printf("Enter 8-->sum print oll odd number from 1 to N-->\n");
        printf("Enter 9-->Multplcation table of any number-->\n");
        printf("Enter 10-->count num of digit in a number-->\n");
        count++;
        }
        printf("\nfor Exsit Enter 0.... either 1\n");
        scanf("%d",&ino);
        switch(ino)
        {
            int ino=0;

            case 1:
            printf("Enter the Number nth natueral\n");
            scanf("%d",&ino);
            oll_Nat_num_nth(ino);
            break;
          
            case 2:
            printf("Enter the Number nth riverse\n");
            scanf("%d",&ino);
            oll_Nat_num_riv(ino);
            break;

            case 3:
            printf("A to X alphbet");
            oll_alphbet('A');
            break;

            case 4:
            printf("Enter the num for print even num to 100\n");
            // scanf("%d",&ino);
            Even_num_nth(100);
            break;

            case 5:
             printf("Enter the num for print odd num to 100\n");
            // scanf("%d",&ino);
             odd_num_nth(100);
            break;

            case 6:
             printf("Enter the nth num for natueral num\n");
            scanf("%d",&ino);
            sum_Natu_num(ino);
            break;

            case 7:
            printf("Enter the nth num for Even num\n");
            scanf("%d",&ino);
            sum_even_num(ino);
            break;

            case 8:
            printf("Enter the nth num for odd num\n");
            scanf("%d",&ino);
            sum_odd_num(ino);
            break;
 
            case 9:
            printf("Enter the number for table\n");
            scanf("%d",&ino);
            Table_num(ino);
            break;

            case 10:
            printf("Enter the number to count digit\n");
            scanf("%d",&ino);
            count_dig_num(ino);
            break;

        }
    }while(ino!=0);
}