//1 Additinn ,2=Subtraction,3=Multiplication,4Divition,5=Rimendar
// #include<stdio.h>
// void main()
// {
    // printf("Enter the Numbar 1,2,3,4,5\n");
    // int ino=0;
    // scanf("%d",&ino);

    // printf("Enter the two Numbar\n");
    // int num=0,num2=0;
    // scanf("%d %d",&num,&num2);

    // int count=0;
    // int sum=0;
    // switch(ino)
    // {
    //     case 1:
    //     printf("Additionis=%d",num+num2);
    //     break;

    //     case 2:
    //     printf("Subtraction is=%d",num-num2);
    //     break;

    //     case 3:
    //     printf("Multplication is =%d",num*num2);
//         break;

//         case 4:
//         printf("Divition is =%d",num/num2);
//         break;

//         case 5:
//         printf("Rimender is =%d",num%num2);
//         break;
//    }

// }
// There is no break in all cases

// Program where two case labels have same value
#include<stdio.h>
#include<conio.h>
void main() 
{  int x = 10,y = 5, p,q;     
    p = x > 9;             //1 true
    q = x > 3 && y!=3;     // 1 true
    printf ("p = %d q = %d", p, q); 
    getch();
}