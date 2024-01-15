#include<stdio.h>
void main()
{
    int k=1,x=1;
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=7;j++)
        {
            // printf(" * ");
            if(j<=k)
            {
                if(j%2==1)
                { printf("\t%d",x);
                }
                else
                {
                 printf("\t*");
                }
            }else{
                printf("\t\t");
            }
        }
        printf("\n");
        if(i<4)
        {
              k=k+2;
              x++;
             

        }
        else if(i>4)
        {
              k=k-2;
              x--;
        

        }
    }
}

// #include<stdio.h>
// void main()
// {
//     int k=1,x=1;
//     for(int i=1;i<=8;i++)
//     {
//         for(int j=1;j<=7;j++)
//         {
//             // printf(" * ");
//             if(j<=k)
//             {
//                 printf(" * ");
//                 if(j%2!=0&&i<=4)
//                 {
//                   printf(" %d ",k);  
//                 }else if(j%2!=0&&i>4){
//                     printf(" %d " ,k);
//                 }else{
//                     printf(" * ");
//                 }
//             }
//         }
//         printf("\n");
//         if(i<4)
//         {
//            k=k+2;
//            x++;
//         }else if(i>4){
//             k=k-2;
//             x--;
//         }
//     }
// }