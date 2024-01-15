//              1
//           2  3  2
//        3  4  5  4  3
//     4  5  6  7  6  5  4
//  5  6  7  8  9  8  7  6  5
#include<stdio.h>
void main()
{
    int ino=1;
    for(int i=1;i<=5;i++)
    {
        ino=i;
        // printf("%d",ino);
        for(int j=1;j<=9;j++)
        { 
            // printf("  ");
            if(j>=6-i&&j<=4+i)
            {
                // printf(" * ");
                if(j<=4){
                    printf(" %d ",ino);
                ino++;
                }else{
                    printf(" %d ",ino);
                ino--;
                }
            //  printf(" %d ",ino);
            }else
            {
            printf("   ");
            }  
        }
        ino++;
        printf("\n");
        
    }
}