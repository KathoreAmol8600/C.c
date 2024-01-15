//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *
#include<stdio.h>
void main()
{
    int K=1;
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            // printf(" * ");
            if((j<=i&&i<=4)||(j<=8-i&&i>4))
            {
                printf(" * ");
            }else{
                printf("   ");
            }
           
            
        }
        printf("\n");
        
    }
}


// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=5;j++)
//         {
//             // printf(" * ");
//             if(i==1||i==3||j==1||j==5)
//             {
//                 printf(" * ");
//             }else
//             {
//                 printf("   ");
//             }
        
//         }
//         printf("\n");
//     }
