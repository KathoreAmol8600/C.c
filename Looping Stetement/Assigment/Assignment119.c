//  1  2  3  4
//     1  2  3  4
//        1  2  3  4
//           1  2  3  4

#include<stdio.h>
void main()
{
    int ino=1;
    for(int i=1;i<=4;i++)
    {
        ino=1;
        for(int j=1;j<=7;j++)
        {
            // printf(" * ");
            if(i>j)
            { 
                printf("   ");
            }
            else if((j==i)||(j<=3+i))
            { 
                printf(" %d ",ino);
                ino++;
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}